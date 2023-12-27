def solution(A, B):
    answer = 0
    
    a = len(A)
    
    while True:
        if(A == B):
            return answer
        
        if(answer > a):
            return -1
        
        str1 = A[-1] + A[:a-1]
        A = str1
        
        answer += 1