  #include <stdio.h>

  int main () 
  {
    int d_nasc, m_nasc, a_nasc,
        d_atual, m_atual, a_atual,
        idade;

    printf("Digite a data de nascimento no formato dd/mm/aaaa: ");
    scanf ("%d/%d/%d", &d_nasc, &m_nasc, &a_nasc);
    printf("Digite a data atual no formato dd/mm/aaaa: ");
    scanf ("%d/%d/%d", &d_atual, &m_atual, &a_atual);

    // Calcula a idade
    if ((m_nasc == m_atual && d_nasc > d_atual) || (m_nasc > m_atual))
        idade = a_atual - a_nasc - 1; 
    else
        idade = a_atual - a_nasc; 
    printf("A idade eh %d", idade);
    return 0;
  }