#include "Box.h"

// Implement setters and getters
void Box::setLength(int L){

	length=L;
}
int Box::getLength(){

	return length;
}
void Box::setWidth(int W){
	width=W;
}
int Box::getWidth(){
	return width;
}
void Box::setHeight(int H){
	height=H;
}
int Box::getHeight(){
	return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
	return width*length*height;
}
