
/** @file queries.h
*	@brief Header file de queries.c
*
*	@autor João Pedro Rodrigues Azevedo (A85227) 
*	@autor Paulo Jorge da Silva Araújo 
*	@autor Pedro Filipe Costa Machado 
*
*	@bug Nenhum que tivessemos reparado.
*	
*/

/*______________________________________________________________________*/

#ifndef _QUERIES_
#define _QUERIES_

/*_________________BIBLIOTECAS IMPLEMENTADAS____________________________*/

#include "stack.h"
#include "lstring.h"
#include "hashtables.h"
#include "Faturacao.h"

int procuraProdutoAVL (AVL vendas, char* prod);
void recursive_query6 (int *sp, AVL vendas, AVL produtos);
int procuraClienteAVL (AVL vendas, char* cliente);
void clientesPobres (int *sp, AVL vendas, AVL clientes);
void query6 (AVL vendas, AVL produtos, AVL clientes);

/*______________________________________________________________________*/

/** @brief Função que gere a query1.
 *
 *  @param set Struct que contém as informações de leitura.
 *  @return void.
*/

void query1 (GLOBAL set);


/** @brief Função que implementa a query2.
 *
 *  @param ls Lista de produtos para inserção.
 *  @param produtos AVL que guarda os produtos validos.
 *  @param c letra que o user pretende para guardar os produtos
 *		     que se iniciam por essa letra.
 *  @return A lista dos produtos iniciados por essa letra.
*/

LISTA_PROD query2 (LISTA_PROD ls, AVL produtos, char c);


/** @brief Função para apresentacao de resultados da query3.
 *
 *  @param f struct faturacao.
 *  @return void.
*/

void showFaturacaoGlobal_query3 (FAT f);


/** @brief Função para apresentacao de resultados da query3.
 *
 *  @param f struct faturacao.
 *  @return void.
*/

void showFaturacaoPorFilial_query3 (FAT prod);


/** @brief Função que implementa a query3.
 *
 *  @param vendas AVL que guarda as vendas validas.
 *  @param mes variavel de procura mes.
 *  @param produto produto para procura 
 *  @param opcao flag, 0: resultado por filial, 1: resultado global 
 *  @return void.
*/

void query3 (AVL vendas, int mes, char *produto, int opcao);


/** @brief Função que implementa a query5.
 *
 *  @param vendas AVL que armazena as vendas validas
 *  @return void.
*/

void query5(AVL vendas);


/** @brief Função que implementa a query7.
 *
 *  @param cliente cliente para procura.
 *  @param vendas AVL que armazena as vendas validas
 *  @return void.
*/

void query7(AVL vendas, char* cliente);


/** @brief Função que auxilia a query7.
 *
 *  @param cliente cliente de procura.
 *  @param nProd array que armazena o resultado da função.
 *  @param vendas AVL que armazena as vendas validas
 *  @return void.
*/

void recursive_query7 (AVL vendas, char* cliente, int** nProd);

/** @brief Função que implementa a query8.
 *
 *  @param min mes inferior.
 *  @param max mes superior.
 *  @param vendas AVL que armazena as vendas validas
 *  @return void.
*/

void query8(int min, int max, AVL vendas);


/** @brief Função que implementa a query9.
 *
 *  @param produto produto de pesquisa.
 *  @param filial filial de procura.
 *  @param vendas AVL que armazena as vendas validas
 *  @return void.
*/

void query9 (AVL vendas, char* produto, int filial);


/** @brief Função auxilial da query10.
 *         Utiliza uma lista como struct de apoio à procura e armazenamento de dados.
 *
 *  @param cliente cliente de procura.
 *  @param mes mes de procura.
 *  @param produtos LString para guardar resultados de leitura (não nula).
 *  @return void.
*/

LString recursive_query10 (AVL vendas, char* cliente, int mes, LString produtos);


/** @brief Função que implementa a query10.
 *
 *  @param mes mes de procura.
 *  @param vendas AVL que armazena as vendas validas
 *  @param cliente cliente de procura na AVL vendas.
 *  @return void.
*/

void query10 (AVL vendas, char* cliente, int mes);


/** @brief Função que auxilia a query11.
 *		   Usa uma hashtable e gera na mesma os resultados.
 *  @param vendas AVL de vendas validas.
 *  @param h HashTable para armazenar os resultados.
 *  @return void.
*/

void recursive_query11(AVL vendas, HEAD_TABLE h);


/** @brief Função que implementa a query11.
 *
 *  @param vendas AVL de vendas validas.
 *  @param n número de elementos para imprimir da hashtable.
 *  @return void.
*/

void query11 (AVL vendas, int n);


/** @brief Função que auxilia a query11.
 *
 *  @param vendas AVL de vendas validas.
 *  @param cliente CLIENTE de procura.
 *  @param produtos Lista de armazenamento de produtos
 *  @return lista com os produtos armazenados.
*/

LString recursive_query12 (AVL vendas, char* cliente, LString produtos);


/** @brief Função que implementa a query12.
 *
 *  @param vendas AVL de vendas validas.
 *  @param cliente CLIENTE de procura.
 *  @return void.
*/

void query12 (AVL vendas, char* cliente);

#endif