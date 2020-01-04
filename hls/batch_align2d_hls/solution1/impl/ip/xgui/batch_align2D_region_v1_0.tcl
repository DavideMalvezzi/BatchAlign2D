# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  #Adding Group
  set group_0 [ipgui::add_group $IPINST -name "group 0" -parent ${Page_0} -display_name {m axi dev reg (AXI4 Master Interface)}]
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_ENABLE_ID_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_ID_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_DATA_WIDTH" -parent ${group_0} -widget comboBox
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_ENABLE_USER_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_WUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_BUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_RUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_USER_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_PROT_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_DATA_CACHE_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_ENABLE_ID_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_ID_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH" -parent ${group_0} -widget comboBox
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_ENABLE_USER_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_USER_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_PROT_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_ENABLE_ID_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_ID_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_DATA_WIDTH" -parent ${group_0} -widget comboBox
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_ENABLE_USER_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_AWUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_WUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_BUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_ARUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_RUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_USER_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_PROT_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_PATCHES_CACHE_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_ENABLE_ID_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_ID_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_DATA_WIDTH" -parent ${group_0} -widget comboBox
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_ENABLE_USER_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_AWUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_WUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_BUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_ARUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_RUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_USER_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_PROT_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_POS_CACHE_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ENABLE_ID_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ID_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_DATA_WIDTH" -parent ${group_0} -widget comboBox
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ENABLE_USER_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_AWUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_WUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_BUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_RUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_USER_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_PROT_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_CACHE_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_ENABLE_ID_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH" -parent ${group_0} -widget comboBox
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_ENABLE_USER_PORTS" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE" -parent ${group_0}
  ipgui::add_param $IPINST -name "C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE" -parent ${group_0}



}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ENABLE_ID_PORTS } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_ENABLE_ID_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ENABLE_ID_PORTS } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_ENABLE_ID_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ID_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_ID_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ID_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_ID_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_DATA_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_DATA_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ENABLE_USER_PORTS } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_ENABLE_USER_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ENABLE_USER_PORTS } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_ENABLE_USER_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_WUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_WUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_WUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_WUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_BUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_BUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_BUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_BUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_RUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_RUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_RUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_RUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_USER_VALUE } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_USER_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_USER_VALUE } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_USER_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_PROT_VALUE } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_PROT_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_PROT_VALUE } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_PROT_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_CACHE_VALUE } {
	# Procedure called to update C_M_AXI_MY_REGION_DATA_CACHE_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_DATA_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_DATA_CACHE_VALUE } {
	# Procedure called to validate C_M_AXI_MY_REGION_DATA_CACHE_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ENABLE_ID_PORTS } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_ENABLE_ID_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ENABLE_ID_PORTS } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_ENABLE_ID_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ID_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_ID_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ID_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_ID_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ENABLE_USER_PORTS } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_ENABLE_USER_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ENABLE_USER_PORTS } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_ENABLE_USER_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_USER_VALUE } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_USER_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_USER_VALUE } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_USER_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_PROT_VALUE } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_PROT_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_PROT_VALUE } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_PROT_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE } {
	# Procedure called to update C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE } {
	# Procedure called to validate C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_PATCHES_ENABLE_ID_PORTS } {
	# Procedure called to update C_M_AXI_MY_PATCHES_ENABLE_ID_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_PATCHES_ENABLE_ID_PORTS } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_ENABLE_ID_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_ID_WIDTH } {
	# Procedure called to update C_M_AXI_MY_PATCHES_ID_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_ID_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_ID_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_DATA_WIDTH } {
	# Procedure called to update C_M_AXI_MY_PATCHES_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_DATA_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_PATCHES_ENABLE_USER_PORTS } {
	# Procedure called to update C_M_AXI_MY_PATCHES_ENABLE_USER_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_PATCHES_ENABLE_USER_PORTS } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_ENABLE_USER_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_AWUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_PATCHES_AWUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_AWUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_AWUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_WUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_PATCHES_WUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_WUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_WUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_BUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_PATCHES_BUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_BUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_BUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_ARUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_PATCHES_ARUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_ARUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_ARUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_RUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_PATCHES_RUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_PATCHES_RUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_RUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_PATCHES_USER_VALUE } {
	# Procedure called to update C_M_AXI_MY_PATCHES_USER_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_PATCHES_USER_VALUE } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_USER_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_PATCHES_PROT_VALUE } {
	# Procedure called to update C_M_AXI_MY_PATCHES_PROT_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_PATCHES_PROT_VALUE } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_PROT_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_PATCHES_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_PATCHES_CACHE_VALUE } {
	# Procedure called to update C_M_AXI_MY_PATCHES_CACHE_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_PATCHES_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_PATCHES_CACHE_VALUE } {
	# Procedure called to validate C_M_AXI_MY_PATCHES_CACHE_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_POS_ENABLE_ID_PORTS } {
	# Procedure called to update C_M_AXI_MY_POS_ENABLE_ID_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_POS_ENABLE_ID_PORTS } {
	# Procedure called to validate C_M_AXI_MY_POS_ENABLE_ID_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_ID_WIDTH } {
	# Procedure called to update C_M_AXI_MY_POS_ID_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_ID_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_POS_ID_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_DATA_WIDTH } {
	# Procedure called to update C_M_AXI_MY_POS_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_DATA_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_POS_DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_POS_ENABLE_USER_PORTS } {
	# Procedure called to update C_M_AXI_MY_POS_ENABLE_USER_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_POS_ENABLE_USER_PORTS } {
	# Procedure called to validate C_M_AXI_MY_POS_ENABLE_USER_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_AWUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_POS_AWUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_AWUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_POS_AWUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_WUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_POS_WUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_WUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_POS_WUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_BUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_POS_BUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_BUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_POS_BUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_ARUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_POS_ARUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_ARUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_POS_ARUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_RUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_POS_RUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_POS_RUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_POS_RUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_POS_USER_VALUE } {
	# Procedure called to update C_M_AXI_MY_POS_USER_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_POS_USER_VALUE } {
	# Procedure called to validate C_M_AXI_MY_POS_USER_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_POS_PROT_VALUE } {
	# Procedure called to update C_M_AXI_MY_POS_PROT_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_POS_PROT_VALUE } {
	# Procedure called to validate C_M_AXI_MY_POS_PROT_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_POS_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_POS_CACHE_VALUE } {
	# Procedure called to update C_M_AXI_MY_POS_CACHE_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_POS_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_POS_CACHE_VALUE } {
	# Procedure called to validate C_M_AXI_MY_POS_CACHE_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_DEBUG_ENABLE_ID_PORTS } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ENABLE_ID_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_DEBUG_ENABLE_ID_PORTS } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ENABLE_ID_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ID_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ID_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ID_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ID_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_DATA_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_DATA_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_DEBUG_ENABLE_USER_PORTS } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ENABLE_USER_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_DEBUG_ENABLE_USER_PORTS } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ENABLE_USER_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_AWUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_AWUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_AWUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_AWUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_WUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_WUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_WUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_WUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_BUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_BUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_BUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_BUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_RUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_RUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_RUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_RUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_USER_VALUE } {
	# Procedure called to update C_M_AXI_MY_DEBUG_USER_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_USER_VALUE } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_USER_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_PROT_VALUE } {
	# Procedure called to update C_M_AXI_MY_DEBUG_PROT_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_PROT_VALUE } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_PROT_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_CACHE_VALUE } {
	# Procedure called to update C_M_AXI_MY_DEBUG_CACHE_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_CACHE_VALUE } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_CACHE_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ENABLE_ID_PORTS } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_ENABLE_ID_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ENABLE_ID_PORTS { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ENABLE_ID_PORTS } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_ENABLE_ID_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ENABLE_USER_PORTS } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_ENABLE_USER_PORTS when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ENABLE_USER_PORTS { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ENABLE_USER_PORTS } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_ENABLE_USER_PORTS
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE
	return true
}

proc update_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE } {
	# Procedure called to update C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE { PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE } {
	# Procedure called to validate C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE
	return true
}


proc update_MODELPARAM_VALUE.C_S_AXI_CTRL_ADDR_WIDTH { MODELPARAM_VALUE.C_S_AXI_CTRL_ADDR_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	# WARNING: There is no corresponding user parameter named "C_S_AXI_CTRL_ADDR_WIDTH". Setting updated value from the model parameter.
set_property value 6 ${MODELPARAM_VALUE.C_S_AXI_CTRL_ADDR_WIDTH}
}

proc update_MODELPARAM_VALUE.C_S_AXI_PARAM_ADDR_WIDTH { MODELPARAM_VALUE.C_S_AXI_PARAM_ADDR_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	# WARNING: There is no corresponding user parameter named "C_S_AXI_PARAM_ADDR_WIDTH". Setting updated value from the model parameter.
set_property value 6 ${MODELPARAM_VALUE.C_S_AXI_PARAM_ADDR_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_ID_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_ID_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ID_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ID_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_ID_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_DATA_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_DATA_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_DATA_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_DATA_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_WUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_WUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_DATA_WUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_WUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_WUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_RUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_RUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_DATA_RUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_RUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_RUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_BUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_BUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_DATA_BUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_BUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_BUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_USER_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_USER_VALUE PARAM_VALUE.C_M_AXI_MY_REGION_DATA_USER_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_USER_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_USER_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_PROT_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_PROT_VALUE PARAM_VALUE.C_M_AXI_MY_REGION_DATA_PROT_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_PROT_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_PROT_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_CACHE_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_CACHE_VALUE PARAM_VALUE.C_M_AXI_MY_REGION_DATA_CACHE_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_DATA_CACHE_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_DATA_CACHE_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ID_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ID_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ID_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ID_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ID_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_USER_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_USER_VALUE PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_USER_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_USER_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_USER_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_PROT_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_PROT_VALUE PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_PROT_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_PROT_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_PROT_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_ID_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_ID_WIDTH PARAM_VALUE.C_M_AXI_MY_PATCHES_ID_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_ID_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_ID_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_DATA_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_DATA_WIDTH PARAM_VALUE.C_M_AXI_MY_PATCHES_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_DATA_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_AWUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_AWUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_PATCHES_AWUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_AWUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_AWUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_ARUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_ARUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_PATCHES_ARUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_ARUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_ARUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_WUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_WUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_PATCHES_WUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_WUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_WUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_RUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_RUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_PATCHES_RUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_RUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_RUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_BUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_BUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_PATCHES_BUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_BUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_BUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_USER_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_USER_VALUE PARAM_VALUE.C_M_AXI_MY_PATCHES_USER_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_USER_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_USER_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_PROT_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_PROT_VALUE PARAM_VALUE.C_M_AXI_MY_PATCHES_PROT_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_PROT_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_PROT_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_CACHE_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_CACHE_VALUE PARAM_VALUE.C_M_AXI_MY_PATCHES_CACHE_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_PATCHES_CACHE_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_PATCHES_CACHE_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_ID_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_POS_ID_WIDTH PARAM_VALUE.C_M_AXI_MY_POS_ID_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_ID_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_ID_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_DATA_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_POS_DATA_WIDTH PARAM_VALUE.C_M_AXI_MY_POS_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_DATA_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_AWUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_POS_AWUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_POS_AWUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_AWUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_AWUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_ARUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_POS_ARUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_POS_ARUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_ARUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_ARUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_WUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_POS_WUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_POS_WUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_WUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_WUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_RUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_POS_RUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_POS_RUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_RUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_RUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_BUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_POS_BUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_POS_BUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_BUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_BUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_USER_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_POS_USER_VALUE PARAM_VALUE.C_M_AXI_MY_POS_USER_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_USER_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_USER_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_PROT_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_POS_PROT_VALUE PARAM_VALUE.C_M_AXI_MY_POS_PROT_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_PROT_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_PROT_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_POS_CACHE_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_POS_CACHE_VALUE PARAM_VALUE.C_M_AXI_MY_POS_CACHE_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_POS_CACHE_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_POS_CACHE_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ID_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ID_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_ID_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ID_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ID_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_DATA_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_DATA_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_DATA_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_AWUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_AWUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_AWUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_AWUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_AWUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_ARUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_WUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_WUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_WUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_WUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_WUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_RUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_RUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_RUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_RUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_RUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_BUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_BUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_BUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_BUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_BUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_USER_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_USER_VALUE PARAM_VALUE.C_M_AXI_MY_DEBUG_USER_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_USER_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_USER_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_PROT_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_PROT_VALUE PARAM_VALUE.C_M_AXI_MY_DEBUG_PROT_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_PROT_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_PROT_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_CACHE_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_CACHE_VALUE PARAM_VALUE.C_M_AXI_MY_DEBUG_CACHE_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_CACHE_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_CACHE_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE}
}

proc update_MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE { MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE}] ${MODELPARAM_VALUE.C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE}
}

