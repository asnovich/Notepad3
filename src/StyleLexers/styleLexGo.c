﻿#include "StyleLexers.h"

KEYWORDLIST KeyWords_Go = {
  // Primary keywords and identifiers
  "break default func interface select case defer go map struct chan else goto package switch const fallthrough if range type "
  "continue for import return var",
  // Secondary keywords and identifiers
  "nil true false",
  // Documentation comment keywords  (doxygen)
  "",
  // Type definitions and aliases
  "bool int int8 int16 int32 int64 byte uint uint8 uint16 uint32 uint64 uintptr float float32 float64 string",
  // Keywords 5
  "",
  // Keywords 6
  "",
  // Keywords 7
  "",
  // ---
  "", ""
};


EDITLEXER lexGo = { 
SCLEX_D, IDS_LEX_GO_SRC, L"Go Source Code", L"go", L"", 
&KeyWords_Go,{
    { STYLE_DEFAULT, IDS_LEX_STR_63126, L"Default", L"", L"" },
    //{ SCE_D_DEFAULT, IDS_LEX_STR_63126, L"Default", L"", L"" },
    { MULTI_STYLE(SCE_D_COMMENT,SCE_D_COMMENTLINE,SCE_D_COMMENTNESTED,0), IDS_LEX_STR_63127, L"Comment", L"fore:#008000", L"" },
    //{ SCE_D_COMMENTDOC, IDS_LEX_STR_63259, L"Comment Doc", L"fore:#040A0", L"" },
    { SCE_D_NUMBER, IDS_LEX_STR_63130, L"Number", L"fore:#FF0000", L"" },
    { SCE_D_WORD, IDS_LEX_STR_63128, L"Keyword", L"bold; fore:#0A246A", L"" },
    { SCE_D_WORD2, IDS_LEX_STR_63260, L"Keyword 2nd", L"bold; fore:#0A246A", L"" },
    //{ SCE_D_WORD3, IDS_LEX_STR_63128, L"Keyword 3", L"bold; fore:#0A246A", L"" },
    //{ SCE_D_WORD5, IDS_LEX_STR_63128, L"Keyword 5", L"bold; fore:#0A246A", L"" },
    //{ SCE_D_WORD6, IDS_LEX_STR_63128, L"Keyword 6", L"bold; fore:#0A246A", L"" },
    //{ SCE_D_WORD7, IDS_LEX_STR_63128, L"Keyword 7", L"bold; fore:#0A246A", L"" },
    { SCE_D_TYPEDEF, IDS_LEX_STR_63258, L"Typedef", L"italic; fore:#0A246A", L"" },
    { MULTI_STYLE(SCE_D_STRING,SCE_D_CHARACTER,SCE_D_STRINGEOL,0), IDS_LEX_STR_63131, L"String", L"italic; fore:#3C6CDD", L"" },
    { SCE_D_OPERATOR, IDS_LEX_STR_63132, L"Operator", L"fore:#B000B0", L"" },
    { SCE_D_IDENTIFIER, IDS_LEX_STR_63129, L"Identifier", L"", L"" },
    //{ SCE_D_COMMENTLINEDOC, L"Default", L"", L"" },
    //{ SCE_D_COMMENTDOCKEYWORD, L"Default", L"", L"" },
    //{ SCE_D_STRINGB, L"Default", L"", L"" },
    //{ SCE_D_STRINGR, L"Default", L"", L"" },
    //C++: { MULTI_STYLE(SCE_C_PREPROCESSOR,SCE_C_PREPROCESSORCOMMENT,SCE_C_PREPROCESSORCOMMENTDOC,0), IDS_LEX_STR_63133, L"Preprocessor", L"fore:#FF8000", L"" },
    EDITLEXER_SENTINEL } };
