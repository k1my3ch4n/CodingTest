def solution(num, total):
    answer = []
    
    k = int(num / 2)
    l = int(total / num)
    
    if(num % 2 == 0):
        for i in range(l - k + 1 , l + k + 1):
            answer.append(i)
    else:
        for i in range(l - k , l+k+1):
            answer.append(i)
    
    return answer