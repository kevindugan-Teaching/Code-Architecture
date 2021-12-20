#ifndef ABSTRACT_VECTOR_H_C981
#define ABSTRACT_VECTOR_H_C981

template<typename T>
class AbstractVector {
    public:
        virtual T l2norm() const = 0;
        virtual unsigned int size() const = 0;
        virtual T get(const unsigned int index) const = 0;
};

#endif // ABSTRACT_VECTOR_H_C981