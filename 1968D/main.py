# D. Permutation Game

def juego_permutacion():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    idx = 0
    t = int(data[idx])
    idx += 1
    
    results = []
    
    for _ in range(t):
        n = int(data[idx])
        k = int(data[idx + 1])
        PB = int(data[idx + 2]) - 1  # Convertir a índice 0
        PS = int(data[idx + 3]) - 1  # Convertir a índice 0
        idx += 4
        
        p = list(map(int, data[idx:idx + n]))
        idx += n
        
        u = list(map(int, data[idx:idx + n]))
        idx += n
        
        score_B = 0
        score_S = 0
        
        current_B = PB
        current_S = PS
        
        for turn in range(k):
            score_B += u[current_B]
            score_S += u[current_S]
            
            current_B = p[current_B] - 1
            current_S = p[current_S] - 1
        
        if score_B > score_S:
            results.append("Bodya")
        elif score_S > score_B:
            results.append("Sasha")
        else:
            results.append("Empate")
    
    for result in results:
        print(result)

