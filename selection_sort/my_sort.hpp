// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful
template<class TYPE>
void swap(TYPE& a, TYPE& b) {
    TYPE tmp = a;
    a = b;
    b = tmp;
}

template<class T>
void my_selection_sort(T begin,T end)
{
    for (T i = begin; i != end; ++i)
    {
        T min = i;
        T next = i; 
        for (T j = ++next; j != end; ++j)
        {
            if (*j < *min)
            {
                min = j;
            }
        }
        swap(*min, *i);
    }
}