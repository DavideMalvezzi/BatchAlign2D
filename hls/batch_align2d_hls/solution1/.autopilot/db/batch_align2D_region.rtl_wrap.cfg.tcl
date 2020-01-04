set lang "C"
set moduleName "batch_align2D_region"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortList ""
set PortName0 "myRegion_data_ptr"
set BitWidth0 "64"
set ArrayOpt0 ""
set Const0 "1"
set Volatile0 "1"
set Pointer0 "1"
set Reference0 "0"
set Dims0 [list 0]
set Interface0 "wire"
set DataType0 "uint8"
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set PortName1 "myRegion_fcoord_ptr"
set BitWidth1 "64"
set ArrayOpt1 ""
set Const1 "1"
set Volatile1 "1"
set Pointer1 "0"
set Reference1 "0"
set Dims1 [list  2]
set Interface1 "wire"
set DataType1 "uint8"
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set PortName2 "my_ref_patch_with_border_ptr"
set BitWidth2 "64"
set ArrayOpt2 ""
set Const2 "1"
set Volatile2 "1"
set Pointer2 "0"
set Reference2 "0"
set Dims2 [list  100]
set Interface2 "wire"
set DataType2 "uint8"
set Port2 [list $PortName2 $Interface2 $DataType2 $Pointer2 $Dims2 $Const2 $Volatile2 $ArrayOpt2]
lappend PortList $Port2
set PortName3 "my_cur_px_estimate_ptr"
set BitWidth3 "64"
set ArrayOpt3 ""
set Const3 "0"
set Volatile3 "1"
set Pointer3 "0"
set Reference3 "0"
set Dims3 [list  2]
set Interface3 "wire"
set DataType3 "float"
set Port3 [list $PortName3 $Interface3 $DataType3 $Pointer3 $Dims3 $Const3 $Volatile3 $ArrayOpt3]
lappend PortList $Port3
set PortName4 "my_converged"
set BitWidth4 "64"
set ArrayOpt4 ""
set Const4 "0"
set Volatile4 "0"
set Pointer4 "1"
set Reference4 "0"
set Dims4 [list 0]
set Interface4 "wire"
set DataType4 "uint64"
set Port4 [list $PortName4 $Interface4 $DataType4 $Pointer4 $Dims4 $Const4 $Volatile4 $ArrayOpt4]
lappend PortList $Port4
set PortName5 "n_iter"
set BitWidth5 "32"
set ArrayOpt5 ""
set Const5 "1"
set Volatile5 "0"
set Pointer5 "0"
set Reference5 "0"
set Dims5 [list 0]
set Interface5 "wire"
set DataType5 "int"
set Port5 [list $PortName5 $Interface5 $DataType5 $Pointer5 $Dims5 $Const5 $Volatile5 $ArrayOpt5]
lappend PortList $Port5
set PortName6 "my_inv_out"
set BitWidth6 "64"
set ArrayOpt6 ""
set Const6 "0"
set Volatile6 "0"
set Pointer6 "0"
set Reference6 "0"
set Dims6 [list  9]
set Interface6 "wire"
set DataType6 "float"
set Port6 [list $PortName6 $Interface6 $DataType6 $Pointer6 $Dims6 $Const6 $Volatile6 $ArrayOpt6]
lappend PortList $Port6
set PortName7 "my_debug_array_ptr"
set BitWidth7 "64"
set ArrayOpt7 ""
set Const7 "0"
set Volatile7 "0"
set Pointer7 "1"
set Reference7 "0"
set Dims7 [list 0]
set Interface7 "wire"
set DataType7 "float"
set Port7 [list $PortName7 $Interface7 $DataType7 $Pointer7 $Dims7 $Const7 $Volatile7 $ArrayOpt7]
lappend PortList $Port7
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 0 
set argAPInt [list  uint64 uint8 ]
set hasCPPAPFix 0 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]
