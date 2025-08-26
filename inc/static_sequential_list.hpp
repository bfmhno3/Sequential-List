#ifndef STATIC_SEQUENTIAL_LIST_HPP__
#define STATIC_SEQUENTIAL_LIST_HPP__

namespace bfh {
constexpr int CAPACITY = 1e3 + 10;

class StaticSequentialList {
 public:
  StaticSequentialList() : size_(0) {};
  ~StaticSequentialList() = default;
  int capacity() { return CAPACITY; }
  int size() { return size_; }
  int get_data(int index) { return list_[index]; }
  void push_back(int data) { list_[++size_] = data; }  // ��һ��Ԫ���±�Ϊ 1
  void push_front(int data) {
    // 1. �Ƚ����е�Ԫ������ƶ�һλ
    for (int i = size_; i >= 1; i--) {
      list_[i + 1] = list_[i];
    }

    // 2. �����ݷ��ڱ�ͷ
    list_[1] = data;
    size_++;
  }
  void insert(int data, int position) {
    // �� position ��������Ԫ�غ���
    for (int i = size_; i >= position; i--) {
    
    list_[i + 1] = list_[i];
    }

    // ����Ԫ��
    list_[position] = data;
    
    size_++;
  }

 private:
  int list_[CAPACITY];
  int size_;
};
}  // namespace bfh

#endif  // STATIC_SEQUENTIAL_LIST_HPP__
