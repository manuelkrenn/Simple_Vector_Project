//
// Created by manue on 05/10/2022.
//

#ifndef UNTITLED17__MATRIX_H_
#define UNTITLED17__MATRIX_H_

class matrix {
 private:
  std::vector<std::vector<int>> vector;

 public:
  matrix();
  void print_elements(matrix &v);
  static const int MAXIMUM_ROWS = 3;
  static const int MAXIMUM_ELEMENTS = 3;

};

#endif //UNTITLED17__MATRIX_H_
