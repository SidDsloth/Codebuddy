class Solution:
    # @param A : string
    # @param B : integer
    # @return a strings
    def convert(self, A, B):
        l=[]
        for z in range(B):
            l.append([])
        if(B!=1):
            for i in range(B):
                if(i<len(A)):
                    l[i].append(A[i])
                else:
                    break
            i+=1
            while(i<len(A)):
                for j in range(B-2,-1,-1):
                    if(i<len(A)):
                        l[j].append(A[i])
                        i+=1    
                    else:
                        break;
                for k in range(1,B):
                    if(i<len(A)):
                        l[k].append(A[i])
                        i+=1
                    else:
                        break
            stri=""
            for m in range(len(l)):
                for n in range(len(l[m])):
                    stri+=l[m][n]
            return stri
        else:
            return A
            
