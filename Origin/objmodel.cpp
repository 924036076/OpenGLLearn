#include "objmodel.h"
#include "utils.h"
#include <string>
#include <sstream>

void ObjModel::Init(const char* objModel) {
	unsigned char* fileContent = LoadFileContent(objModel);
	std::stringstream ssFileContent((char*)fileContent);
	char szOneLine[256];
	if (ssFileContent.eof())
	{
		memset(szOneLine, 0, 256);
		ssFileContent.getline(szOneLine, 256);
		if (strlen(szOneLine)>0)
		{
			if (szOneLine[0]=='v')
			{
				if (szOneLine[1]=='t')
				{
				}
				else if (szOneLine[1]=='n')
				{
				}
				else
				{

				}
			}
			else if (szOneLine[0]=='f')
			{
			}
		}
	}
	delete fileContent;
}

void ObjModel::Draw() {

}