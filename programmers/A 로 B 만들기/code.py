def solution(before, after): 
    arr1 = sorted(list(before))
    arr2 = sorted(list(after))
    
    if(arr1 == arr2):
        return 1
    
    return 0