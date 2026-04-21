def solution(players, m, k):
    answer = 0
    expiry = [0] * 24
    current_servers = 0
    
    for i in range(24):
        current_servers -= expiry[i]
        
        required = players[i] // m
        if current_servers < required:
            add_count = required - current_servers
            answer += add_count
            current_servers += add_count
            if i + k < 24:
                expiry[i + k] += add_count
                
    return answer