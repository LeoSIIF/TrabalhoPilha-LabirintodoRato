# TrabalhoPilha-LabirintodoRato
Trabalho de Pilha encadeada na linguagem C requerido pelo professor Matheus Franco na matéria Estrutura de Dados I 
O programa consiste em um rato representado por "V" tentando achar o queijo no labirinto representado por "Q".
A lógica do código consiste em visitar um ponto, marcá-lo, tentar percorrer o labirinto nos sentidos para direita, para baixo, para esquerda e para cima e
empilhá-lo, logicamente só é possível ir a alguns destes sentidos caso a posição seja um “.”, ou melhor o queijo. O percurso deverá ser interrompido quando o queijo for encontrado. Caso entre
em um beco, este deve ser marcado com “x” e a posição deve ser retrocedida ao ponto anterior, para nova tentativa de percurso. 
Pode ocorrer que o queijo não possa ser encontrado, pois pode não haver como chegar ao mesmo em
decorrência das paredes, assim, é apresentado uma mensagem informando que é impossível achar o queijo.
