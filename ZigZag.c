/*
Autor: Lucas Mateus Menezes Silva
Função que verifica se uma árvore binária é "Zig_Zag", 1- É "Zig_Zag", 0- Não é "Zig_Zag"
*/

int Zig_Zag(NoArv *arvore){	//Recebe a raiz da árvore a ser verificada
	if((arvore->esq != NULL) && (arvore->dir != NULL)){		//No cheio
		return 0;
	}else if((arvore->esq == NULL) && (arvore->dir == NULL)){	//No vazio
		return 0;
	}else{
		if(arvore->esq != NULL){	//Se somente o no a esquerda existir
			Aux = arvore->esq;
			if((Aux->esq == NULL) && (Aux->dir == NULL)){	//Se o proximo No estiver vazio
				return 1;
			}else{
				Zig_Zag(arvore->esq);
			}
		}else if(arvore->dir != NULL){
			Aux = arvore->dir;
			if((Aux->esq == NULL) && (Aux->dir == NULL)){	//Se o proximo No estiver vazio
				return 1;
			}else{
				Zig_Zag(arvore->dir);
			}
		}
	}
}