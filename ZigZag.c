/*
Author: Lucas Mateus Menezes Silva
This function checks if a binary search tree is a ZigZag-like tree
Receives one pointer to the root of the tree
Return 1- Is "Zig_Zag", 0- Isn't "Zig_Zag"
*/

int Zig_Zag(NoArv *arvore){	//Receiving the root
	
	if((arvore->esq != NULL) && (arvore->dir != NULL)){		//Full node
		return 0;
	}else if((arvore->esq == NULL) && (arvore->dir == NULL)){	//Empty node
		return 0;
	}else{
		if(arvore->esq != NULL){	//If just left node exist
			Aux = arvore->esq;
			if((Aux->esq == NULL) && (Aux->dir == NULL)){	//If next node is empty
				return 1;
			}else{
				Zig_Zag(arvore->esq);
			}
		}else if(arvore->dir != NULL){
			Aux = arvore->dir;
			if((Aux->esq == NULL) && (Aux->dir == NULL)){	//If next node is empty
				return 1;
			}else{
				Zig_Zag(arvore->dir);
			}
		}
	}
}
