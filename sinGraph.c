#include <stdio.h>
#include <math.h>

int main() {
	int rows;
	int maxRow = 20;
	int col;
	int maxCols = 60;
	int xmax = 5;
	int xmin = -5;
	int ymax = 1;
	int ymin = -1;
	//float dx = (xmax-xmin)/col;
	//float dy = (ymax-ymin)/rows;
	
	for(rows=maxRow-1; rows>=0; rows--){
		float dy = (ymax-ymin)/rows;
		float ly = ymin + (dy*rows);
		for(col=0; col<maxCols;col++){
			float dx = (xmax-xmin)/col;
			float lx = xmin + (dx*col);
			float x = lx + dx/2;
			float y = sin(x);
			if((ly<=y) && (y<ly+dy)){
				printf("*");}
			else{
				if((x == 0.0) && (rows == 0)){
					printf("+");}
				else if ((x==0.0) && (rows != 0)){
					printf("|");}
				else if (y==0.0){
					printf("-");}
				else {
					printf(" ");}}}
		printf("\n");}
	return 0;
}


