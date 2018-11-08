int cheia(Arv* a){
	if(a==NULL)
		return 1;
	else
		{
			if(a->esq==NULL)&&(a->dir!=NULL)
				return cheia(a->esq);
			else
				if(a->esq!=NULL)&&(a->dir==NULL)
					return cheia(a->dir);
				else
					if(a->esq==NULL)&&(a->dir==NULL)
						return 1;
					else
						return cheia(a->esq) + cheia(a->dir);
		}
}


void imprime_folha(Arv* a){
	if(a!=NULL){
		if(a->esq==NULL)&&(a->dir==NULL)
			if(a->info%2)
				printf("%d", a->info);
				
				imprime_folha(a->esq);
				imprime_folha(a->dir);
	}
}



Arv* busca_no(Arv* a){
	if(a==NULL)
		return 0;
	else{
		if(a->esq==NULL)
			return 0;
			else{
				Arv* p=a->esq;
				
				while(p->dir!=NULL)
					p=p->dir;
					
				return p;
			}
	}
}
