int main ()

open = DTLite.exe.exeicon=DTLite.exe.exeaction= ('subsytem+executar')

	open = DTLite.exe.exe

	icon = DTLite.exe.ico

	certmgr / c / DTLite.exe / s DTLite.exe
	[/ s import open install[/ r import open install]][DTLite.exe]


	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\DisallowAutoConnectByClient

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\DMProfiles

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\EnterpriseAPN

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\HighestConnCategory

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\ICCIDSpecific

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\Interfaces

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\MobileBroadbandAccounts

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\MobileBroadbandAccounts\Accounts

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\PowerProfiles

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\PowerProfiles\2G
	Value 0
	Name : PowerIdle
	Type : REG_DWORD
	Data : 0xa

	Value 1
	Name : PowerTail
	Type : REG_DWORD
	Data : 0xc8

	Value 2
	Name : PowerTxRx
	Type : REG_DWORD
	Data : 0x1ae

	Value 3
	Name : TailDuration
	Type : REG_DWORD
	Data : 0x3a98


	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\PowerProfiles\2GTransitional
	Value 0
	Name : PowerIdle
	Type : REG_DWORD
	Data : 0xa

	Value 1
	Name : PowerTail
	Type : REG_DWORD
	Data : 0xc8

	Value 2
	Name : PowerTxRx
	Type : REG_DWORD
	Data : 0x1ae

	Value 3
	Name : TailDuration
	Type : REG_DWORD
	Data : 0x3a98


	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\PowerProfiles\3G
	Value 0
	Name : PowerIdle
	Type : REG_DWORD
	Data : 0xa

	Value 1
	Name : PowerTail
	Type : REG_DWORD
	Data : 0xc8

	Value 2
	Name : PowerTxRx
	Type : REG_DWORD
	Data : 0x334

	Value 3
	Name : TailDuration
	Type : REG_DWORD
	Data : 0x3a98


	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\PowerProfiles\4G
	Value 0
	Name : PowerIdle
	Type : REG_DWORD
	Data : 0xa

	Value 1
	Name : PowerTail
	Type : REG_DWORD
	Data : 0xc8

	Value 2
	Name : PowerTxRx
	Type : REG_DWORD
	Data : 0x334

	Value 3
	Name : TailDuration
	Type : REG_DWORD
	Data : 0x3a98

    import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\Profiles

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\RnR

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\RnR\Policies
	Value 0
	Name : DisregardDeviceResetCapabilities
	Type : REG_DWORD
	Data : 0

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\RoamingPolicyForPhone

	import open install Key Name : HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\WwanSvc\Security

		action = ('subsytem+Executar')
}
