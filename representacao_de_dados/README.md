# Lista de exercícios (Representação de dados)

1. Converta os seguintes números (na base 10) para as representações binária e hexadecimal:<br>
a) 9<br>
b) 10<br>
c) 11<br>
d) 15<br>
e) 20<br>

2. Converta os seguintes números binários para a representação decimal:<br>
a) 1100<br>
b) 0111<br>
c) 11111<br>
d) 100000<br>
e) 100001<br>

3. Converta os seguintes números (na base 16) para a representação binária, com 1 byte:<br>
a) 0x01<br>
b) 0x02<br>
c) 0x04<br>
d) 0x12<br>
e) 0x55<br>

4. Qual o valor da expressão abaixo?<br>
(0xF0 | ~0x0F) ^ (0xC0 & 0x83)<br>

5. Converta os seguintes números (na base 10) para as representações binária e hexadecimal:<br>
a) 250 <br>
b) 63 <br>
c) 64 <br>
d) 127 <br>
e) 128 <br>
f) 255 <br>
g) 256 <br>
h) 483 <br>

6. Converta os seguintes números (na base 16) para a representação binária, com 1 byte:<br>
a) 0xF8<br>
b) 0xAB<br>
c) 0x16<br>
d) 0x75<br>
e) 0xFF<br>

7. Qual o valor das expressões abaixo?<br>
a) (133 & 122) | 13<br>
b) (!foo) (onde foo é uma variável do tipo char com valor igual a 3)<br>
c) (x <= 0 && x > 10) (onde x é uma variável do tipo int)<br>
d) (200 | 6) ^ (30 & 0x08)<br>

8. Escreva um programa que recebe um número inteiro e diz se ele é par ou ímpar. O teste deve ser feito usando operações bit-a-bit, e não o resto  da divisão (módulo).

9. (DESAFIO)<br>
Todo in ́ıcio de mês e hora da declaração do imposto de renda na Repblica Democrática do Leyzistão, uma ditadura absolutista do Leste Europeu. O ministro da economia Bogdan Baldowzky determinou que cada cidadão deve informar mensalmente seus rendimentos no mês anterior (na moeda local, Unidade de Troca Financeira, ou UTF), em ofício protocolado em 3 vias, com reconhecimento de firma em cartório. O cálculo do imposto a pagar ́e baseado em tabelas que são reajustadas anualmente. A tabela para este ano é a seguinte:<br>

![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/d7f22b11-6f81-4a4a-9938-062612576ab4)<br>

O imposto é calculado de forma que a alíquota não incide sobre o total dos rendimentos, mas somente sobre a parcela que se encontra em determinada faixa. Desta forma, um cidadão com rendimento de UTF 1.200,25 está isento do pagamento do imposto. Por outro lado, um cidadão com rendimento de UTF 1.201,25 terá que pagar imposto de UTF 0,08 (arredondando os valores para 2 casas decimais) - atenção: o imposto neste caso não é UTF 90,09. A tabela abaixo apresenta outros exemplos:<br>

 ![image](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/1577a00e-622f-4621-b915-33fc8d23963f) <br>

 Você deve implementar um programa que recebe como entrada, por meio da função scanf, um valor indicando o rendimento mensal de um cidadão e  mostra na saída, por meio da função printf, um único número, correspondente ao valor do imposto devido, arredondado para 2 casas decimais. O programa não deve mostrar nenhuma outra mensagem, ou seja, tudo o que ele deve apresentar ́é o valor da saída. Suponha que todas as entradas são válidas.<br>
<br>
Obs.: Em uma situação real, os valores da tabela não estariam hard coded no código-fonte, e sim definidos em um banco de dados. Além disso, entradas e saídas não seriam feitas diretamente por meio de terminais em modo texto, os dados seriam transmitidos e armazenados em bancos de dados, possivelmente com apresentação sob demanda em alguma interface apropriada. E claro, cada dado fornecido precisaria ser testado - o que acontece se alguém informar rendimento negativo? Por enquanto, abstraia estes detalhes!<br>
<br>
Obs.: Este problema poderia ter uma solção mais elegante com o uso de repetições e vetores, mas por ora você NAO DEVE utilizar estes recursos!