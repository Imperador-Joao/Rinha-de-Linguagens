-- Marca o tempo inicial
local tempoInicial = os.clock()

-- Executa a função um milhão de vezes
for i = 1, 1000000 do
    
end

-- Marca o tempo final
local tempoFinal = os.clock()

-- Calcula e imprime o tempo total
local tempoTotal = tempoFinal - tempoInicial
print("Tempo total:", 1000*tempoTotal, "ms")
