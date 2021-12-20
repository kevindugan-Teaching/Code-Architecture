#ifndef VECTOR_H_0192
#define VECTOR_H_0192

#include "AbstractVector.h"
#include <vector>

template<typename T>
class Vector : public AbstractVector<T> {

    public:
        Vector();
        Vector(const unsigned int N);
        Vector(const std::vector<T> &values);
        virtual ~Vector();

        T l2norm() const;
        unsigned int size() const;
        T get(const unsigned int index) const;

    private:
        T *_values;
        unsigned int _size;
};

#include "Vector.hpp"

#endif // VECTOR_H_0192