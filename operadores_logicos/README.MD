# Lista de exercícios (Operadores lógicos)

1. Escreva um programa que recebe um número inteiro e imprime SIM se o número for par e maior do que 10, ou for ímpar e menor do que 50. Caso contrário, o programa deve imprimir NAO. Use operadores lógicos para testar as condições. O programa deve ter uma única estrutura if... else.

2. Suponha que uma pessoa pode se aposentar se:<br>
- Tiver no mínimo 65 anos de idade.<br>
- Tiver contribuído por no mínimo 30 anos para o INSS.<br>
- Tiver no mínimo 60 anos de idade e tiver contribuído por no mínimo 25 anos para o INSS.<br>
Escreva um programa que receba o ano atual, o ano de nascimento do empregado e o ano em que ele começou a contribuir para o INSS (supondo que a contribuição foi ininterrupta). O programa deve escrever a idade do empregado ao final do ano atual, e dizer se ele poderá ou não se aposentar até lá.

3. Escreva um programa que recebe 3 números distintos e os mostra em ordem crescente. O programa deve usar apenas 3 variáveis, e os seus conteúdos não devem ser modificados após a leitura dos valores.

4. Escreva um programa que recebe a data de nascimento de uma pessoa e a data atual (no formato dd/mm/aaaa), calcule e apresente a idade da pessoa.

5. (Adaptado da OBI 2018)<br>
A organização da OIBR, Olimpíada Internacional de Basquete de Robô, está começando a ter problemas com dois times: os Bit Warriors e os Byte Bulls. É que os robôs desses times acertam quase todos os lançamentos, de qualquer posição na quadra! Pensando bem, o jogo de basquete ficaria mesmo sem graça se jogadores conseguissem acertar qualquer lançamento, não é mesmo? Uma das medidas que a OIBR está implantando é uma nova pontuação para os lançamentos, de acordo com a distância do robô para o início da quadra. A quadra tem 2000 centímetros de comprimento, como na figura.<br>
![imagem_2023-07-18_233342561](https://github.com/1larissa/fundamentos-de-programacao/assets/129631047/fe86d242-e386-4a22-b720-9643df569083)<br>
Dada a distância D, em cm, do robô até o início da quadra, onde está a cesta, a regra é a seguinte:<br>
• Se D ≤ 800, a cesta vale 1 ponto;<br>
• Se 800 < D ≤ 1400, a cesta vale 2 pontos;<br>
• Se 1400 < D ≤ 2000, a cesta vale 3 pontos.<br>
A organização da OIBR precisa de ajuda para automatizar o placar do jogo. Dado o valor da distância D, você deve escrever um programa para calcular o número de pontos do lançamento: 1, 2 ou 3.<br>
Exemplos:<br>
Entrada&emsp; Saída<br>
1720 &emsp;&emsp;3<br>
250  &emsp;&emsp;&ensp;1<br>

6. Suponha que você está programando um módulo contador de cédulas para caixas eletrônicos. Escreva um programa que informa com quantas cédulas  de Real podemos representar um dado valor, considerando que existem cédulas de 1, 2, 5, 10, 20, 50 e 100 Reais. Exemplo de resposta: R$ 218 = 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 1 cédula de 1. O número de cédulas usadas deve ser o menor possível. Desconsidere valores com centavos, e suponha que a máquina sempre tem disponíveis as cédulas necessárias.

7. Escreva um programa que recebe 3 valores e verifica se eles podem ser os comprimentos dos lados de um triângulo. Em caso positivo, escrever  uma mensagem informando se é um triângulo isósceles, equilátero ou escaleno. Obs.: o comprimento de um lado do triângulo é sempre menor do que a soma dos outros dois.

8. OPCIONAL! Ainda considerando o seu trabalho com caixas eletrônicos, você deve escrever um programa que recebe um número de conta-corrente com três dígitos e mostra o seu dígito verificador. O dígito verificador é calculado da seguinte forma (utilizando o número 235 como exemplo):<br>

- Some o número da conta com o mesmo número com os dígitos invertidos. Exemplo: 235 + 532 = 767 (o algoritmo para realizar esta inversão já foi visto em outro exercício).<br>

- Se a soma anterior for maior ou igual a 1000, desconsidere o milhar.<br>

- Separe os 3 dígitos do número resultante, multiplicando a centena por 1, a dezena por 2, e a unidade por 3. Some os 3 valores. Exemplo: 7 (posição 1), 6 (posição 2) e 7 (posição 3): (7 x 1) + (6 x 2) + (7 x 3) = 7 + 12 + 21 = 40.<br>

- O último dígito desse resultado é o dígito verificador da conta. Exemplo: 0.<br>





