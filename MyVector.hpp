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
// Define your MyVector-related functions here

template <typename T> T &MyVector<T>::at(int index) {
  if (index < 0 || index >= num_elements) {
    throw std::out_of_range("Index out of range");
  }
  return data[index];
}

template <typename T> void MyVector<T>::shrink_to_fit() {
  if (num_elements < max_elements / 4) {
    int new_max_elements = max_elements / 2;
    if (new_max_elements < 4) {
      new_max_elements = 4;
    }

    T *temp = new T[new_max_elements];
    for (int i = 0; i < num_elements; i++) {
      temp[i] = data[i];
    }
    max_elements = new_max_elements;
    delete[] data;
    data = temp;
  }
}

template <typename T> int MyVector<T>::size() { return num_elements; }

template <typename T> int MyVector<T>::capacity() { return max_elements; }

template <typename T> T &MyVector<T>::front() {
  if (num_elements == 0) {
    throw std::out_of_range("Vector is empty");
  }
  return data[0];
}

template <typename T> T &MyVector<T>::back() {
  if (num_elements == 0) {
    throw std::out_of_range("Vector is empty");
  }
  return data[num_elements - 1];
}

template <typename T> MyVector<T>::~MyVector() { delete[] data; }

template <typename T>
const MyVector<T> &MyVector<T>::operator=(const MyVector<T> &rhs) {
  if (this != &rhs) {
    delete[] data;
    max_elements = rhs.max_elements;
    num_elements = rhs.num_elements;
    data = new T[max_elements];
    for (int i = 0; i < num_elements; i++) {
      data[i] = rhs.data[i];
    }
  }
  return *this;
}

template <typename T> MyVector<T>::MyVector(const MyVector<T> &rhs) {
  max_elements = rhs.max_elements;
  num_elements = rhs.num_elements;
  data = new T[max_elements];
  for (int i = 0; i < num_elements; i++) {
    data[i] = rhs.data[i];
  }
}

template <typename T>
void MyVector<T>::insert(ArrayListIterator position, const T &value) {
  int index = static_cast<int>(position);
  if (index < 0 || index > num_elements) {
    throw std::out_of_range("Invalid position for insertion");
  }

  if (num_elements == max_elements) {
    reserve(max_elements * 2); // Double capacity if full
  }

  for (int i = num_elements; i > index; i--) {
    data[i] = data[i - 1];
  }

  data[index] = value;
  num_elements++;
}

template <typename T> void MyVector<T>::erase(ArrayListIterator position) {
  int index = static_cast<int>(position);
  if (index < 0 || index >= num_elements) {
    throw std::out_of_range("Invalid position for erasing");
  }

  for (int i = index; i < num_elements - 1; i++) {
    data[i] = data[i + 1];
  }

  num_elements--;

  if (num_elements < max_elements / 4) {
    shrink_to_fit();
  }
}

template <typename T> bool MyVector<T>::find(const T &value) {
  for (int i = 0; i < num_elements; i++) {
    if (data[i] == value) {
      return true;
    }
  }
  return false;
}

template <typename T> void MyVector<T>::clear() {
  num_elements = 0;
  shrink_to_fit();
}

template <typename T> void MyVector<T>::swap(MyVector &other) {
  std::swap(max_elements, other.max_elements);
  std::swap(num_elements, other.num_elements);
  std::swap(data, other.data);
}
