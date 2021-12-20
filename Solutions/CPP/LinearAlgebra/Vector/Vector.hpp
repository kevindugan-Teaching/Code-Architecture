#include "Vector.h"
#include "math.h"

template<typename T>
Vector<T>::Vector(){
    this->_size = 0;
    this->_values = nullptr;
}

template<typename T>
Vector<T>::Vector(const unsigned int N){
    this->_size = N;
    this->_values = new T[N];
    for (unsigned int i = 0; i < N; i++)
        this->_values[i] = T();
}

template<typename T>
Vector<T>::Vector(const std::vector<T> &values){
    this->_size = values.size();
    this->_values = new T[this->_size];
    for (unsigned int i = 0; i < this->_size; i++)
        this->_values[i] = values[i];
}

template<typename T>
Vector<T>::~Vector(){
    if (this->_values != nullptr)
        delete[] this->_values;
    this->_values = nullptr;
}

template<typename T>
T Vector<T>::l2norm() const {
    T result = 0.0;
    for (unsigned int i = 0; i < this->_size; i++)
        result += this->_values[i] * this->_values[i];
    
    return sqrt(result);
}

template<typename T>
unsigned int Vector<T>::size() const {
    return this->_size;
}

template<typename T>
T Vector<T>::get(const unsigned int index) const {
    return this->_values[index];
}