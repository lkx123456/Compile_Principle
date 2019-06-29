#include "def.h"

// semantic.c
void semantic_error(int line, char *msg1, char *msg2);
void prn_symbol();
int searchSymbolTable(char *name);
int fillSymbolTable(char *name, char *alias, int level, int type, char flag, int offset);
int fill_Temp(char *name, int level, int type, char flag, int offset);
int match_param(int i, struct node *T);
void Exp(struct node *T);
void semantic_Analysis(struct node *T);
void semantic_Analysis0(struct node *T);

// code.c
char *strcat0(char *s1, char *s2);
char *newAlias();
char *newLabel();
char *newTemp();
struct codenode *genIR(int op, struct opn opn1, struct opn opn2, struct opn result);
struct codenode *genLabel(char *label);
struct codenode *genGoto(char *label);
struct codenode *merge(int num, ...);
void prnIR(struct codenode *head);

// exp.c
void boolExp(struct node *T);
void id_exp(struct node *T);
void int_exp(struct node *T);
void float_exp(struct node *T);
void char_exp(struct node *T);
void string_exp(struct node *T);
void assignop_exp(struct node *T);
void relop_exp(struct node *T);
void args_exp(struct node *T);
void op_exp(struct node *T);
void func_call_exp(struct node *T);
void not_exp(struct node *T);
void unminus_exp(struct node *T);
void exp_array(struct node *T);
void exp_struct_tag(struct node *T);

// semantic_case.c
void ext_var_list(struct node *T);
void ext_def_list(struct node *T);
void ext_var_def(struct node *T);
void func_def(struct node *T);
void func_dec(struct node *T);
void ext_struct_def(struct node *T);
void struct_def(struct node *T);
void struct_dec(struct node *T);
void array_dec(struct node *T);
void param_list(struct node *T);
void param_dec(struct node *T);
void comp_stm(struct node *T);
void def_list(struct node *T);
void var_def(struct node *T);
void stm_list(struct node *T);
void if_then(struct node *T);
void if_then_else(struct node *T);
void while_dec(struct node *T);
void exp_stmt(struct node *T);
void return_dec(struct node *T);
