
#@title day004
import numpy as np
matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
matrix = np.array(matrix)
dim = len(matrix.shape)
if dim==1:
  print(matrix)
elif dim==2:
  for i in range(matrix.shape[1]):
    temp = matrix[:,i]
    print(temp[::-1])
else:
  print('Over 2Dimension is not supported')
