#ifndef STATIC_SEQUENTIAL_LIST_HPP__
#define STATIC_SEQUENTIAL_LIST_HPP__

namespace bfh {
constexpr int CAPACITY = 1e3 + 10;

class StaticSequentialList {
 public:
  StaticSequentialList() : list_{}, size_(0) {};
  ~StaticSequentialList() = default;
  int capacity() { return CAPACITY; }
  int size() { return size_; }
  int get_data(int index) { return list_[index]; }
  void push_back(int data) { insert(data, size_ + 1); }  // ��һ��Ԫ���±�Ϊ 1
  void push_front(int data) { insert(data, 1); }
  void insert(int data, int position) {
    // ������ȫ���
    if (position <= 0 || position > size_ + 1 || size_ >= CAPACITY - 1) {
      return;
    }
    // �� position ��������Ԫ�غ���
    for (int i = size_; i >= position; i--) {
      list_[i + 1] = list_[i];
    }

    // ����Ԫ��
    list_[position] = data;

    size_++;
  }
  void pop_back() { size_--; }
  void pop_front() {
    // ������Ԫ������
    for (int i = 1; i < size_; i++) {
      list_[i] = list_[i + 1];
    }
    size_--;
  }

 private:
  int list_[CAPACITY];
  int size_;
};
}  // namespace bfh

#endif  // STATIC_SEQUENTIAL_LIST_HPP__
