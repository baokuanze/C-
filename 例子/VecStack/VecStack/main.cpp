//
//  main.cpp
//  VecStack
//
//  Created by 079 on 14-10-14.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
template <class T>
class Vector
{
private:
    T* rep;      			// a dynamic array of T
    int capacity;   			// the size of the dynamic array
    int size;          			// the number of members in the array
    Vector<T>& shrink( );	// reduce the capacity by a quarter
public:
    Vector( );           	// default constructor
    Vector(T* p, int s);
    // constructor initializing a Vector object with an ordinary array p of size s
    Vector(const Vector<T>& v);					// copy constructor
    ~Vector( );                						// destructor
    const Vector<T>& operator=(const Vector<T>& v);		// overloaded =
    const T& operator[ ] (int index) const;      			// overloaded [ ] const
    T& operator[ ] (int index);                  				// overloaded [ ]
    int get_capacity( ) const;                				// returning capacity
    int get_size( ) const;                       				// returning size
    Vector<T>& add(const T& t);       		// adding a new member at the end
    T* search(const T& t) const;          		// returning a pointer to t   									// or NULL if not found
    Vector<T>& remove(const T& t);       		// removing t from a Vector object
    Vector<T>& remove( );			// removing a member at the end
};

template <class T>
ostream& operator<<(ostream& out, const Vector<T>&  v)
{
    for (int i = 0; i < v.get_size( ); ++i)
    { out << v[i] << endl; }
    return out;
}

template <class T>
Vector<T>& Vector<T>::shrink( )
{
	capacity = capacity * 3 / 4;		// reduce the capacity by a quarter
	T * temp = new T[capacity];
	for (int i = 0; i < size; ++i)
	{ temp[i] = rep[i]; }
	delete [ ] rep;
	rep = temp;
	return *this;
}

template <class T>
Vector<T>::Vector( ) : capacity(0), size(0), rep(NULL) { }

template <class T>
Vector<T>::~Vector( ) { delete [ ] rep; }

template <class T>
Vector<T>::Vector(T* p, int s) : capacity(s), size(s), rep(new T[s])
{
    for (int i = 0; i < s; ++i)
    { rep[i] = p[i]; }
}

template<class T>
Vector<T>::Vector(const Vector<T>& v)
: capacity(v.capacity), size(v.size), rep(new T[v.capacity])
{
    for (int i = 0; i < size; ++i)
    { rep[i] = v.rep[i]; }
}

template<class T>
const Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{
    if (rep != v.rep)
    {
        delete [ ] rep;
        capacity = v.capacity;
        size =v.size;
        rep = new T[capacity];
        for (int i = 0; i < size; ++i)
        { rep[i] = v.rep[i]; }
    }
    return *this;
}

template <class T>
const T& Vector<T>::operator[ ] (int index) const
{return rep[index];}

template <class T>
T& Vector<T>::operator[ ] (int index)
{return rep[index];}

template <class T>
int Vector<T>::get_capacity( ) const
{return capacity;}

template <class T>
int Vector<T>::get_size( ) const
{return size;}

template<class T>
Vector<T>& Vector<T>::add(const T& t)
{
    if (size == capacity)
    {
        capacity = 2 * capacity + 1;
        T* temp = new T[capacity];			// create a larger array
        for (int i = 0; i < size; ++i)
        { temp[i] = rep[i]; }
        delete [ ] rep;
        rep = temp;
    }   			// copy the old array to new location
    rep[size++] = t;	// add the new member
    return *this;
}

template<class T>
T* Vector<T>::search(const T& t) const
{
    T* p = rep;
    int i = 0;
    
    while (i < size && *p != t)
    { ++i;  ++p; }
    if (i == size)
    { p = NULL; }
    return p;
}

template <class T>
Vector<T>& Vector<T>::remove(const T& t)
{
    T* p = search(t);
    if (p)
    {
        for (int i = int(p - rep); i < size - 1; ++i)
        { rep[i] = rep[i + 1]; }
        --size;
        if (size < capacity / 2)
        { shrink( ); }
    }
    return *this;
}

template <class T>
Vector<T>& Vector<T>::remove( )
{
    --size;
    if (size < capacity / 2)
    { shrink( ); }
    return *this;
}

template <class T>
bool operator==(const Vector<T>& v1, const Vector<T>& v2)
{
    bool yes = true;
    
    if (v1.get_capacity( ) != v2.get_capacity( )
        || v1.get_size( ) != v2.get_size( ))
    { yes = false; }
    else
    {
        int i = 0;
        int s = v1.get_size( );
        while (i < s && v1[i] == v2[i++]);
        if (i < s)
        { yes = false; }
    }
    return yes;
}


// an abstract base class of stack
template <class T>
class Stack
{
public:
	virtual bool empty( ) = 0;
	virtual bool full( ) = 0;
	virtual Stack& push(T& new_member) = 0;
	virtual Stack& pop( ) = 0;
	virtual T& top( ) = 0;
};

// a concrete stack class using the Vector implementation
template <class T>
class VecStack : public Stack<T>, private Vector<T*>
{
public:
	bool empty( )
	{ return this->get_size( ) == 0; }
    
	bool full( )
	{ return this->get_size() == this->get_capacity(); }
    
	Stack<T>& push(T& new_member)
	{
		this->add(&new_member);
		return *this;
	}
    
	Stack<T>& pop( )
	{
		if (!empty( ))
		{ this->remove( ); }
		return *this;
	}
    
	T& top( )
	{ return *(*this)[this->get_size( ) - 1]; }
};
int main(int argc, const char * argv[])
{

    VecStack<int> s;
    
	int one = 1, two = 2, three = 3;
    
	s.push(one).push(two).push(three);
	cout << s.top( ) << endl;
	s.pop( ).pop( );
	cout << s.top( ) << endl;
	s.pop( );
	if (!s.empty( ))
	{ cout << "Error.\n"; }
	else
	{ cout << "Empty.\n"; }
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

