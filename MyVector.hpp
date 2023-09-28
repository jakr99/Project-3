/* Define all your MyVector-related functions here.
 * You do not need to include the h file.
 * It included this file at the bottom.
 */

// We're giving you these functions for free
// and as a guide for the syntax.

template <typename T> T &MyVector<T>::operator[](int index) {
  return data[index]; // no bounds checking!!
}

template <typename T> void MyVector<T>::push_back(const T &value) {
  if (num_elements == max_elements)
    reserve(max_elements * 2); // double capacity if full

  data[num_elements] = value;
  num_elements++;
}

template <typename T> void MyVector<T>::pop_back() {
  if (num_elements > 0)
    num_elements--;
}

template <typename T> void MyVector<T>::reserve(int new_max_elements) {

  T *temp = new T[new_max_elements];
  for (int k = 0; k < num_elements; k++)
    temp[k] = data[k];
  max_elements = new_max_elements;
  delete[] data;
  data = temp;
  temp = nullptr;
}

// Another example: remember when writing an implementation in hpp,
// return type first, then scope just before the function name.
template <typename T> T &MyVector<T>::at(int index) {
  // Define the function here. Write this one yourself!

}

/*
Also implement the following functions:

/// Accessors & Modifiers ///
* int size()
* int capacity()
* T& front()
* T& back()

/// Default Member Functions ///
* ~MyVector()
* const MyVector<T>& operator=( const MyVector<T> &rhs )
* MyVector( const MyVector<T> &rhs )

/// Operations ///
* void insert(int i, const T& x)
* void erase(int i)
* bool find(const T& x)
* void swap( MyVector& other )

/// Auxilliary ///
* void shrink_to_fit()

*/

template <typename T> void MyVector<T>::shrink_to_fit() {

}

template <typename T> int MyVector<T>::size() {  }

template <typename T> int MyVector<T>::capacity() { }

template <typename T> T &MyVector<T>::front() { }

template <typename T> T &MyVector<T>::back() {  }

template <typename T> MyVector<T>::~MyVector() {

}


template <typename T>
const MyVector<T> &MyVector<T>::operator=(const MyVector<T> &rhs) {

}

template <typename T> MyVector<T>::MyVector(const MyVector<T> &rhs) {

}

template <typename T>
void MyVector<T>::insert(ArrayListIterator index, const T &value) {

}

template <typename T> void MyVector<T>::erase(ArrayListIterator index) {

}

template <typename T> bool MyVector<T>::find(const T &value) {

}

template <typename T> void MyVector<T>::clear() {  }

template <typename T> void MyVector<T>::swap(MyVector &other) {

}