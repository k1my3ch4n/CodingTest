def solution(chicken):
    answer = 0
    
    while chicken >= 10:
        k = int(chicken / 10)
        l = int(chicken % 10)
        
        answer += k
        chicken = k + l
    
    return answer