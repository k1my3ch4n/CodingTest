def solution(id_pw, db):
    userId = id_pw[0]
    userPw = id_pw[1]
    
    sameId = 0
    
    for i in db:
        if(i[0] == userId and i[1] == userPw):
            return 'login'
        
        if(i[0] == userId and i[1] != userPw):
            sameId = 1
    
    if(sameId == 1):
        return 'wrong pw'
    else:
        return 'fail'