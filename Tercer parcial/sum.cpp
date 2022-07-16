/*
Autor: Gabriel Martínez González
Fecha: 01/11/2019
Objetivo: Imprimir un polinomio
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <cmath>

int main()
{
	int g,cont,i,h,w,j;
	int pol[50],xd[50],res[50];
	char c;
	
	printf("Introduzca sus dos polinomios con los que desea operar");
	printf("\nNOTA: Recuerda que si no aparece una cierta x^n; es porque el coeficiente es 0\n\n");
	
	printf("Introduzca el grado de su primer polinomio\n");
	scanf("%d",&g);
	
	i=g;
	for(cont=g;cont>=0;cont--){
		if(cont==0){
			printf("Introduzca su termino constante: ");
			scanf("%d",&pol[i]);
		}else{
			if(cont==1){
				printf("Introduzca el coeficiente de su termino de x: ");
				scanf("%d",&pol[i]);
			}else{
				printf("Introduzca el coeficiente de su termino de x^%d: ",cont);
				scanf("%d",&pol[i]);
			}
		}
		i--;
	}
	printf("\n");
	
	printf("Introduzca el grado de su segundo polinomio\n");
	scanf("%d",&w);
	
	i=w;
	for(cont=w;cont>=0;cont--){
		if(cont==0){
			printf("Introduzca su termino constante: ");
			scanf("%d",&xd[i]);
		}else{
			if(cont==1){
				printf("Introduzca el coeficiente de su termino de x: ");
				scanf("%d",&xd[i]);
			}else{
				printf("Introduzca el coeficiente de su termino de x^%d: ",cont);
				scanf("%d",&xd[i]);
			}
		}
		i--;
	}
	printf("\n");
	
	h=g;
	printf("Su primer polinomio es: ");
	for(cont=g;cont>=0;cont--){
		
		if(pol[cont]==0){
			h--;
		}else{
			if(h==0){
				printf("%d",pol[cont]);
			}else{
				if(h==1){
					if(pol[0]==0){
						printf("%dx ",pol[cont]);
						h--;
					}else{
						printf("%dx + ",pol[cont]);
						h--;
					}
				}else{
				
					printf("%dx^%d + ",pol[cont],h);
					h--;
				}
			}
		}
		
	}
	
	printf("\nSu segundo polinomio es: ");
	h=w;
	for(cont=w;cont>=0;cont--){
		
		if(xd[cont]==0){
			h--;
		}else{
			if(h==0){
				printf("%d",xd[cont]);
			}else{
				if(h==1){
					if(xd[0]==0){
						printf("%dx ",xd[cont]);
						h--;
					}else{
						printf("%dx + ",xd[cont]);
						h--;
					}
				}else{
				
					printf("%dx^%d + ",xd[cont],h);
					h--;
				}
			}
		}
	}
	
	printf("\n\nCual operaci\242n desea realizar?\ns=Suma\nr=Resta");
	scanf("%s",&c);
	
	if(c=='s'){
		if(w<g){
			for(j=0;j<=g;j++){
				if(j<=w){
					res[j]=pol[j]+xd[j];
				}else{
					res[j]=pol[j];	
				}
			}
				printf("\n\nLa suma de ambos polinomios es: ");
				h=g;
				for(cont=g;cont>=0;cont--){
		
					if(res[cont]==0){
						h--;
					}else{
						if(h==0){
							printf("%d",res[cont]);
						}else{
							if(h==1){
								if(res[0]==0){
									printf("%dx ",res[cont]);
									h--;
								}else{
									printf("%dx + ",res[cont]);
									h--;
								}
							}else{
				
								printf("%dx^%d + ",res[cont],h);
								h--;
							}
						}
					}
				}
		}else{
			if(g<w){
				for(j=0;j<=w;j++){
					if(j<=g){
						res[j]=pol[j]+xd[j];
					}else{
						res[j]=xd[j];	
					}
				}
					printf("\n\nLa suma de ambos polinomios es: ");
					h=w;
					for(cont=w;cont>=0;cont--){
			
						if(res[cont]==0){
							h--;
						}else{
							if(h==0){
								printf("%d",res[cont]);
							}else{
								if(h==1){
									if(res[0]==0){
										printf("%dx ",res[cont]);
										h--;
									}else{
										printf("%dx + ",res[cont]);
										h--;
									}
								}else{
					
									printf("%dx^%d + ",res[cont],h);
									h--;
								}
							}
						}
					}
			
			}else{//w==g
				for(j=0;j<=g;j++){
					res[j]=pol[j]+xd[j];
				}
			
				printf("\n\nLa suma de ambos polinomios es: ");
				h=g;
				for(cont=g;cont>=0;cont--){
		
					if(res[cont]==0){
						h--;
					}else{
						if(h==0){
							printf("%d",res[cont]);
						}else{
							if(h==1){
								if(res[0]==0){
									printf("%dx ",res[cont]);
									h--;
								}else{
									printf("%dx + ",res[cont]);
									h--;
								}
							}else{
		
								printf("%dx^%d + ",res[cont],h);
								h--;
							}
						}
					}
				}		
			}
		}
	}else{
		if(w<g){
		for(j=0;j<=g;j++){
			if(j<=w){
				res[j]=pol[j]-xd[j];
			}else{
				res[j]=pol[j];	
			}
		}
			printf("\n\nLa resta de ambos polinomios es: ");
			h=g;
			for(cont=g;cont>=0;cont--){
		
				if(res[cont]==0){
					h--;
				}else{
					if(h==0){
						printf("%d",res[cont]);
					}else{
						if(h==1){
							if(res[0]==0){
								printf("%dx ",res[cont]);
								h--;
							}else{
								printf("%dx + ",res[cont]);
								h--;
							}
						}else{
				
							printf("%dx^%d + ",res[cont],h);
							h--;
						}
					}
				}
			}
	}else{
		if(g<w){
			for(j=0;j<=w;j++){
				if(j<=g){
					res[j]=pol[j]-xd[j];
				}else{
					res[j]=xd[j];	
				}
			}
				printf("\n\nLa resta de ambos polinomios es: ");
				h=w;
				for(cont=w;cont>=0;cont--){
			
					if(res[cont]==0){
						h--;
					}else{
						if(h==0){
							printf("%d",res[cont]);
						}else{
							if(h==1){
								if(res[0]==0){
									printf("%dx ",res[cont]);
									h--;
								}else{
									printf("%dx + ",res[cont]);
									h--;
								}
							}else{
				
								printf("%dx^%d + ",res[cont],h);
								h--;
							}
						}
					}
				}
			
		}else{//w==g
			for(j=0;j<=g;j++){
				res[j]=pol[j]-xd[j];
			}
			
			printf("\n\nLa resta de ambos polinomios es: ");
			h=g;
			for(cont=g;cont>=0;cont--){
		
				if(res[cont]==0){
					h--;
				}else{
					if(h==0){
						printf("%d",res[cont]);
					}else{
						if(h==1){
							if(res[0]==0){
								printf("%dx ",res[cont]);
								h--;
							}else{
								printf("%dx + ",res[cont]);
								h--;
							}
						}else{
		
							printf("%dx^%d + ",res[cont],h);
							h--;
						}
					}
				}
			}		
		}
	}
	}
	
	return 0;
}
