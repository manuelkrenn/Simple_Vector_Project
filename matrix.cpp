//
// Created by manue on 05/10/2022.
//

#include "matrix.h"
#include<iostream>
#include<vector>

matrix::matrix() {
  int input;
  std::vector<int> vec_input;
  vector;
  std::cout << "Please enter vector numbers: " << std::endl;

  for(int i = 0; i < MAXIMUM_ROWS; i++)
  {
    vec_input = {};
    std::cout << "Ich bin I " << i << " mal hier hergekommen." << std::endl;
    for(int j = 0; j < MAXIMUM_ELEMENTS; j++)
    {
      std::cin >> input,
      vec_input.push_back(input);
      std::cout << "Ich bin J " << j << " mal hier hergekommen." << std::endl;
    }
    vector.push_back(vec_input);
  }
  std::cout << "Matrix wurde erstellt" << std::endl;
}

void matrix::print_elements(matrix &v) {
  std::cout << "The numbers in the vector are: " << std::endl;
  for(const auto &elements : vector)
  {
    std::cout << std::endl;
    for(const auto &s : elements)
      std::cout << s << " ";
  }
}
