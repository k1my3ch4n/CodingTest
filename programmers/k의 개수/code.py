def solution(i, j, k):
    answer = 0
    
    for l in range(i, j+1):
        if str(k) in str(l):
            for m in str(l):
                if(m == str(k)):
                    answer += 1
    
    return answer