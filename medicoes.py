from time import time

def medir_tempo(funcao):
    def cronometro():
        tempo_inicial = time()
        funcao()
        tempo_final = time()
        print((tempo_final - tempo_inicial)*1000)
    
    return cronometro

@medir_tempo
def contar_ate_1M():
    for i in range(1,10**6 + 1):
        pass


contar_ate_1M()