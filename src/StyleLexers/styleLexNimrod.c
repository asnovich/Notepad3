﻿#include "StyleLexers.h"

KEYWORDLIST KeyWords_Nimrod = {
  "addr and as asm atomic bind block break case cast concept const continue converter "
  "defer discard distinct div do elif else end enum except export finally for from func "
  "generic if import in include interface is isnot iterator let macro method mixin mod "
  "nil not notin object of or out proc ptr raise ref return shl shr static "
  "template try tuple type using var when while with without xor yield",
  "", "", "", "", "", "", "", "" };


EDITLEXER lexNimrod = { SCLEX_NIMROD, IDS_LEX_NIM_SRC, L"Nim Source Code", L"nim; nimrod", L"", &KeyWords_Nimrod,{
                        { STYLE_DEFAULT, IDS_LEX_STR_63126, L"Default", L"", L"" },
                        //{ SCE_P_DEFAULT, IDS_LEX_STR_63126, L"Default", L"", L"" },
                        { MULTI_STYLE(SCE_P_COMMENTLINE,SCE_P_COMMENTBLOCK,SCE_C_COMMENTLINEDOC,0), IDS_LEX_STR_63127, L"Comment", L"fore:#880000", L"" },
                        { SCE_P_WORD, IDS_LEX_STR_63128, L"Keyword", L"bold; fore:#000088", L"" },
                        { SCE_P_IDENTIFIER, IDS_LEX_STR_63129, L"Identifier", L"", L"" },
                        { MULTI_STYLE(SCE_P_STRING,SCE_P_STRINGEOL,0,0), IDS_LEX_STR_63211, L"String Double Quoted", L"fore:#008800", L"" },
                        { SCE_P_CHARACTER, IDS_LEX_STR_63212, L"String Single Quoted", L"fore:#008800", L"" },
                        { SCE_P_TRIPLEDOUBLE, IDS_LEX_STR_63244, L"String Triple Double Quotes", L"fore:#008800", L"" },
                        { SCE_P_TRIPLE, IDS_LEX_STR_63245, L"String Triple Single Quotes", L"fore:#008800", L"" },
                        { SCE_P_NUMBER, IDS_LEX_STR_63130, L"Number", L"fore:#FF4000", L"" },
                        { SCE_P_OPERATOR, IDS_LEX_STR_63132, L"Operator", L"bold; fore:#666600", L"" },
                        //{ SCE_P_DEFNAME, IDS_LEX_STR_63247, L"Function name", L"fore:#660066", L"" },
                        //{ SCE_P_CLASSNAME, IDS_LEX_STR_63246, L"Class name", L"fore:#660066", L"" },
                        EDITLEXER_SENTINEL } };
