import numpy as np
def Mat_Mult():
    c = np.zeros((a.shape[0],b.shape[1]))
    if a.shape[1] == b.shape[0]:
        for i in range(0,a.shape[0]):
            for j in range(0,b.shape[1]):
                for k in range(0,b.shape[0]):
                    c[i,j] += a[i,k] * b[k,j]
    print (c)  
    if a.shape[1] != b.shape[0]:
        print("Matrix Multiplication not possible")

                
if __name__ == "__main__":
    a = np.array([[12,7,3],[4,5,6],[7,8,9]])
    b = np.array([[8,1,2],[3,0,7],[1,9,1]])
    print(b.shape)
    Mat_Mult()    
