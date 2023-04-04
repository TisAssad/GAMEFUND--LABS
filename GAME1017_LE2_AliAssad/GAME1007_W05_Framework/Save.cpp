#include <iostream>
#include "vector"
#include <string>
#include "tinyxml2.h"
#include "Engine.h"
#include "States.h"
#include "EventManager.h"

using namespace tinyxml2;
using namespace std;


//int main()
//{
//	if (EVMA::KeyPressed(SDL_SCANCODE_S))
//	{
//		XMLDocument xmlDoc; // Document Object Model.
//		XMLNode* pRoot = xmlDoc.NewElement("Turret");
//		xmlDoc.InsertEndChild(pRoot);
//		
//		XMLElement* pElement = xmlDoc.NewElement("Position");
//		pElement->SetAttribute("location", )
//
//		xmlDoc.LoadFile("SaveTurret.xml");
//		pElement = xmlDoc.NewElement("Turret");
//		pElement->SetText("Turret position is located at : ");
//
//
//		xmlDoc.SaveFile("SaveTurret.xml");
//	}
//	return 0;
//}