def solution(babbling):
    answer = 0
    
    dic = ['aya' , 'ye', 'woo', 'ma']
    arr = ['aya' , 'ye', 'woo', 'ma']
    
    for _ in range(3):
        ar = []
        
        for i in arr:
            for j in dic:
                if(i not in j):
                    k = j + i
                    ar.append(k)
        dic = dic + ar
        
    
    for i in babbling:
        if(i in dic):
            answer += 1
    
    return answer