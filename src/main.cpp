#include "main.hpp"

#include <iostream>

#include "static_sequential_list.hpp"

void print(bfh::StaticSequentialList& sqlist) {
  int size = sqlist.size();
  for (int i = 1; i <= size; i++) {
    std::cout << sqlist.get_data(i) << " ";
  }
  std::cout << std::endl;
}

int main(void) {
  bfh::StaticSequentialList sqlist;
  sqlist.push_back(2);
  print(sqlist);
  sqlist.push_back(5);
  print(sqlist);
  sqlist.push_back(1);
  print(sqlist);
  sqlist.push_back(3);
  print(sqlist);
  sqlist.push_front(10);
  print(sqlist);
  sqlist.insert(4, 2);
  print(sqlist);
  sqlist.insert(4, 2);
  print(sqlist);
  //// 尾删
  //sqlist.pop_back();
  //print(sqlist);
  //sqlist.pop_back();
  //print(sqlist);
  //sqlist.pop_back();
  //print(sqlist);
  //sqlist.pop_back();
  //print(sqlist);
  //sqlist.pop_back();
  //print(sqlist);
  //sqlist.pop_back();
  //print(sqlist);
  //sqlist.pop_back();
  //print(sqlist);
  ////头删
  //sqlist.pop_front();
  //print(sqlist);
  //sqlist.pop_front();
  //print(sqlist);
  //sqlist.pop_front();
  //print(sqlist);
  //sqlist.pop_front();
  //print(sqlist);
  //sqlist.pop_front();
  //print(sqlist);
  //sqlist.pop_front();
  //print(sqlist);
  //sqlist.pop_front();
  //print(sqlist);
  //sqlist.pop_front();
  //print(sqlist);
  // 任意位置删除
  sqlist.erase(3);
  print(sqlist);
  sqlist.erase(4);
  print(sqlist);
  sqlist.erase(5);
  print(sqlist);

  return 0;
}
