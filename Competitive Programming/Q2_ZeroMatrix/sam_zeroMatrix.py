# -*- coding: utf-8 -*-
"""
Created on Wed Oct 19 15:17:56 2022

@author: samyak
"""

import numpy


def change_matrix(matrix):
    c_matrix = matrix.copy()
    indices = []
    for index, item in enumerate(matrix):
        if 0 in item:
            indices += list(numpy.where(item == 0)[0])
            c_matrix[index] = [0] * (c_matrix.shape)[1]
    c_matrix = c_matrix.transpose()
    for index in set(indices):
        c_matrix[index] = [0] * (c_matrix.shape)[1]
    return c_matrix.transpose()

matrix = numpy.array([[1, 1, 1, 0], 
                      [1, 1, 0, 1], 
                      [1, 1, 1, 1], 
                      [1, 1, 1, 1]])

print(f"Original matrix:\n{matrix}")
print(f"Changed matrix:\n{change_matrix(matrix)}")
            
        
    
        
            