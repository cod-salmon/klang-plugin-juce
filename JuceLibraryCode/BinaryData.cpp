/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#include <cstring>

namespace BinaryData
{

//================== SimpleGain.k ==================
static const unsigned char temp_binary_data_0[] =
"\r\n"
"#include <klang.h>\r\n"
"using namespace klang::optimised;\r\n"
"\r\n"
"struct SimpleGain : Effect {\r\n"
"\r\n"
"\t// Initialise plugin (called once at startup)\r\n"
"\tSimpleGain() {\r\n"
"\t\tcontrols = { \r\n"
"\t\t\tDial(\"Gain\", 0.0, 1.0, 0.5),\r\n"
"\t\t};\r\n"
"\t}\r\n"
"\r\n"
"\t// Apply processing (called once per sample)\r\n"
"\tvoid process() {\r\n"
"\t\tparam gain = controls[0];\r\n"
"\t\tin * gain >> out;\r\n"
"\t}\r\n"
"};";

const char* SimpleGain_k = (const char*) temp_binary_data_0;


const char* getNamedResource (const char* resourceNameUTF8, int& numBytes);
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes)
{
    unsigned int hash = 0;

    if (resourceNameUTF8 != nullptr)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0xa220581d:  numBytes = 340; return SimpleGain_k;
        default: break;
    }

    numBytes = 0;
    return nullptr;
}

const char* namedResourceList[] =
{
    "SimpleGain_k"
};

const char* originalFilenames[] =
{
    "SimpleGain.k"
};

const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8)
{
    for (unsigned int i = 0; i < (sizeof (namedResourceList) / sizeof (namedResourceList[0])); ++i)
        if (strcmp (namedResourceList[i], resourceNameUTF8) == 0)
            return originalFilenames[i];

    return nullptr;
}

}
