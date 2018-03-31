#ifndef _yacc_defines_h_
#define _yacc_defines_h_

#define tknID 257
#define tknStrLit 258
#define tknCharLit 259
#define tknNumber 260
#define tknTypedef 261
#define tknUsing 262
#define tknLong 263
#define tknEnum 264
#define tknPreProDef 265
#define tknClass 266
#define tknStruct 267
#define tknUnion 268
#define tknNamespace 269
#define tknTemplate 270
#define tknTypename 271
#define tknDocBlockComment 272
#define tknDocLineComment 273
#define tknScopeResOp 274
#define tknNumSignSpec 275
#define tknPublic 276
#define tknProtected 277
#define tknPrivate 278
#define tknExternC 279
#define tknUnRecogPrePro 280
#define tknStdHdrInclude 281
#define tknPragma 282
#define tknEllipsis 283
#define tknConstCast 284
#define tknStaticCast 285
#define tknDynamicCast 286
#define tknReinterpretCast 287
#define tknTry 288
#define tknCatch 289
#define tknThrow 290
#define tknOperator 291
#define tknPlusEq 292
#define tknMinusEq 293
#define tknMulEq 294
#define tknDivEq 295
#define tknPerEq 296
#define tknXorEq 297
#define tknAndEq 298
#define tknOrEq 299
#define tknLShift 300
#define tknRShift 301
#define tknLShiftEq 302
#define tknRShiftEq 303
#define tknCmpEq 304
#define tknNotEq 305
#define tknLessEq 306
#define tknGreaterEq 307
#define tkn3WayCmp 308
#define tknAnd 309
#define tknOr 310
#define tknInc 311
#define tknDec 312
#define tknArrow 313
#define tknArrowStar 314
#define tknConst 315
#define tknStatic 316
#define tknExtern 317
#define tknVirtual 318
#define tknOverride 319
#define tknInline 320
#define tknExplicit 321
#define tknFriend 322
#define tknVolatile 323
#define tknPreProHash 324
#define tknDefine 325
#define tknUndef 326
#define tknInclude 327
#define tknIf 328
#define tknIfDef 329
#define tknIfNDef 330
#define tknElse 331
#define tknElIf 332
#define tknEndIf 333
#define tknFor 334
#define tknWhile 335
#define tknDo 336
#define tknSwitch 337
#define tknCase 338
#define tknNew 339
#define tknDelete 340
#define tknReturn 341
#define tknBlankLine 342
#define CMPEQUAL 343
#define LSHIFT 344
#define RSHIFT 345
#define ARROW 346
#define PREFIX 347
#define POSTFIX 348
#define PTRDECL 349
#define REFDECL 350
#define CTORDECL 351
#define DTORDECL 352
#define YYERRCODE 256

typedef union {
  CppToken              str;
  CppObj*               cppObj;
  CppVar*               cppVarObj;
  CppEnum*              cppEnum;
  CppEnumItem*          enumItem;
  CppEnumItemList*      enumItemList;
  CppTypedef*           typedefObj;
  CppUsing*             usingObj;
  CppCompound*          cppCompundObj;
  CppTemplateArgList*   templSpec;
  CppTemplateArg*       templArg;
  CppDocComment*        docCommentObj;
  CppFwdClsDecl*        fwdDeclObj;
  CppVarList*           cppVarObjList;
  CppUnRecogPrePro*     unRecogPreProObj;
  CppExpr*              cppExprObj;
  CppFunction*          cppFuncObj;
  CppFunctionPtr*       cppFuncPointerObj;
  CppVarOrFuncPtrType   varOrFuncPtr;
  CppParamList*         paramList;
  CppConstructor*       cppCtorObj;
  CppDestructor*        cppDtorObj;
  CppTypeCoverter*      cppTypeConverter;
  CppMemInitList*       memInitList;
  CppInheritanceList*   inheritList;
  CppCompoundType       compoundType;
  unsigned short        ptrLevel;
  CppRefType            refType;
  unsigned int          attr;
  CppObjProtLevel       protLevel;

  CppExprList*          exprList;

  CppIfBlock*           ifBlock;
  CppWhileBlock*        whileBlock;
  CppDoWhileBlock*      doWhileBlock;
  CppForBlock*          forBlock;

  CppDefine*            hashDefine;
  CppUndef*             hashUndef;
  CppInclude*           hashInclude;
  CppHashIf*            hashIf;
  CppPragma*            hashPragma;
} YYSTYPE;
extern YYSTYPE yylval;

#endif
