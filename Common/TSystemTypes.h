#ifndef	_TGLSYSTEMTYPES_H_
#define	_TGLSYSTEMTYPES_H_
/* ========================================================================= */
/*		��`																 */
/* ========================================================================= */
//!	SYSINFO_T.uFlag
#define	SYSINFOF_FIRSTBOOT	(1<< 0)	//!< ����N��
#define	SYSINFOF_CREATEINI	(1<< 1)	//!< �ݒ�t�@�C������
#define	SYSINFOF_FULLSCREEN	(1<< 2)	//!< �t���X�N���[�����[�h
#define	SYSINFOF_VSYNC		(1<< 3)	//!< VSYNC�L��
#define	SYSINFOF_PADPOVMAIN	(1<< 4)	//!< �p�b�h��POV���厲�Ɠ���������
#define	SYSINFOF_PADVIB		(1<< 5)	//!< �p�b�h�U��
#define	SYSINFOF_AEROOFF	(1<< 6)	//!< WindowsAero�𖳌��ɂ���
#define	SYSINFOF_SFX		(1<< 7)	//!< SFX�L��
#define	SYSINFOF_ANAGLYPH	(1<< 8)	//!< ���̎� 
#define	SYSINFOF_NOSURROUND	(1<< 9)	//!< �T���E���h����
#define	SYSINFOF_LFE		(1<<10)	//!< �T�E���hLFE�L��
#define	SYSINFOF_BGEXEC		(1<<11)	//!< �o�b�N�O���E���h���s
#define	SYSINFOF_12			(1<<12)	//!< 
#define	SYSINFOF_13			(1<<13)	//!< 
#define	SYSINFOF_14			(1<<14)	//!< 
#define	SYSINFOF_15			(1<<15)	//!< 
#define	SYSINFOF_16			(1<<16)	//!< 
#define	SYSINFOF_17			(1<<17)	//!< 
#define	SYSINFOF_18			(1<<18)	//!< 
#define	SYSINFOF_19			(1<<19)	//!< 
#define	SYSINFOF_20			(1<<20)	//!< 
#define	SYSINFOF_21			(1<<21)	//!< 
#define	SYSINFOF_22			(1<<22)	//!< 
#define	SYSINFOF_23			(1<<23)	//!< 
#define	SYSINFOF_24			(1<<24)	//!< 
#define	SYSINFOF_25			(1<<25)	//!< 
#define	SYSINFOF_26			(1<<26)	//!< 
#define	SYSINFOF_27			(1<<27)	//!< 
#define	SYSINFOF_28			(1<<28)	//!< 
#define	SYSINFOF_29			(1<<29)	//!< 
#define	SYSINFOF_30			(1<<30)	//!< 
#define	SYSINFOF_31			(1<<31)	//!< 

//!	OS
#define	SYSINFOOS_UNKNOWN		(0)		//!< �s��
#define	SYSINFOOS_WINDOWS		(1)		//!< Windows�V���[�Y�̉���
#define	SYSINFOOS_WINDOWS_95	(2)		//!< 95
#define	SYSINFOOS_WINDOWS_98	(3)		//!< 98
#define	SYSINFOOS_WINDOWS_ME	(4)		//!< Me
#define	SYSINFOOS_WINDOWS_9X	(5)		//!< 9x
#define	SYSINFOOS_WINDOWS_3_X	(6)		//!< 3.x
#define	SYSINFOOS_WINDOWS_NT4	(7)		//!< NT 4.0
#define	SYSINFOOS_WINDOWS_2000	(8)		//!< 2000
#define	SYSINFOOS_WINDOWS_XP	(9)		//!< XP
#define	SYSINFOOS_WINDOWS_S2003	(10)	//!< Server2003
#define	SYSINFOOS_WINDOWS_VISTA	(11)	//!< Vista
#define	SYSINFOOS_WINDOWS_7		(12)	//!< 7
#define	SYSINFOOS_WINDOWS_8		(13)	//!< 8
#define	SYSINFOOS_MAX			(14)	//!< 

//!	�𑜓x
#define	SYSINFORESO_320_240		(0)	//!< 4:3		
#define	SYSINFORESO_640_480 	(1)
#define	SYSINFORESO_800_600 	(2)
#define	SYSINFORESO_1024_768	(3)
#define	SYSINFORESO_1280_960	(4)
#define	SYSINFORESO_1600_1200	(5)
#define	SYSINFORESO_640_360		(6)	//!< 16:9		
#define	SYSINFORESO_848_480		(7)
#define	SYSINFORESO_1280_720	(8)
#define	SYSINFORESO_1600_900	(9)
#define	SYSINFORESO_1920_1080	(10)
#define	SYSINFORESO_2560_1440	(11)
#define	SYSINFORESO_3840_2160	(12) //!< 4K
#define	SYSINFORESO_7680_4320	(13) //!< 8K
#define	SYSINFORESO_MAX			(14)
//! 16:9�J�n
#define	SYSINFORESO_16_9_START	SYSINFORESO_640_360
//!	�ߑ�T�C�Y
#define	SYSINFORESO_LARGE_START	SYSINFORESO_2560_1440

//!	�A�X�y�N�g��
#define	SYSINFOASPECT_NONE	(0)	//!< ����
#define	SYSINFOASPECT_4_3	(1)	//!< 4:3
#define	SYSINFOASPECT_5_4	(2)	//!< 5:4
#define	SYSINFOASPECT_15_9	(3)	//!< 15:9
#define	SYSINFOASPECT_16_9	(4)	//!< 16:9
#define	SYSINFOASPECT_16_10	(5)	//!< 16:10
#define	SYSINFOASPECT_MAX	(6)	//!< 

//!	MSAA
#define	SYSINFOMSAA_NONE	(0)	//!< ����
#define	SYSINFOMSAA_X2		(1)	//!< x2
#define	SYSINFOMSAA_X4		(2)	//!< x4
#define	SYSINFOMSAA_X6		(3)	//!< x6
#define	SYSINFOMSAA_X8		(4)	//!< x8
#define	SYSINFOMSAA_X16		(5)	//!< x16
#define	SYSINFOMSAA_MAX		(6)	//!< 

//!	�A���`�G�C���A�X
#define	SYSINFOAA_NONE			(0)	//!< ����
#define	SYSINFOAA_FXAA			(1)	//!< FXAA
#define	SYSINFOAA_SMAA_LOW		(2)	//!< SMAA
#define	SYSINFOAA_SMAA_MID		(3)	//!< SMAA
#define	SYSINFOAA_SMAA_HIGH		(4)	//!< SMAA
#define	SYSINFOAA_SMAA_ULTRA	(5)	//!< SMAA
#define	SYSINFOAA_MAX			(6)

//!	�e�N�X�`���t�B���^
#define SYSINFOTEXF_POINT		(0)	//!< ��Ԗ���
#define SYSINFOTEXF_LINEAR		(1)	//!< ���`
#define SYSINFOTEXF_ANISOTROPIC	(2)	//!< �ٕ���
#define SYSINFOTEXF_MAX			(3)

//!	�|�X�g�t�B���^�i��
#define SYSINFOPFLV_STD		(0)	//!< �W��
#define SYSINFOPFLV_LOW		(1)	//!< ��i��
#define SYSINFOPFLV_MAX		(2)

//!	�O���t�B�b�N�X���x��
#define SYSINFOGRPLV_STD	(0)	//!< �W��
#define SYSINFOGRPLV_LOW	(1)	//!< ��i��
#define SYSINFOGRPLV_MAX	(2)

//!	�|�X�g�t�B���^�i��
#define SYSINFOGRPLV_STD	(0)	//!< �W��
#define SYSINFOGRPLV_LOW	(1)	//!< ��i��
#define SYSINFOGRPLV_MAX	(2)

//!	�v���Z�b�g�i��
#define SYSINFOPQ_LOW		(0)	//!< ��i��
#define SYSINFOPQ_LOWMED	(1)	//!< �ᒆ�i��
#define SYSINFOPQ_MED		(2)	//!< �W��
#define SYSINFOPQ_HIGH		(3)	//!< ���i��
#define SYSINFOPQ_MAX		(4)

//!	���[�W����
#define	SYSINFOREGION_UNKNOWN	(0)	//!< �s��
#define	SYSINFOREGION_JP		(1)	//!< ���{
#define	SYSINFOREGION_USA		(2)	//!< �k��
#define	SYSINFOREGION_EURO		(3)	//!< ���B
#define	SYSINFOREGION_ASIA		(4)	//!< �A�W�A
#define	SYSINFOREGION_MAX		(5)

//!	����
#define	SYSINFOLANG_JP		(0)	//!< ���{��
#define	SYSINFOLANG_EN		(1)	//!< �p��
#define	SYSINFOLANG_MAX		(2)	//!< 


//!	FPS���[�h
#define	SYSINFOFPS_NONE		(0)	//!< ����
#define	SYSINFOFPS_10		(1)	//!< 10
#define	SYSINFOFPS_20		(2)	//!< 20
#define	SYSINFOFPS_30		(3)	//!< 30
#define	SYSINFOFPS_50		(4)	//!< 50
#define	SYSINFOFPS_60		(5)	//!< 60
#define	SYSINFOFPS_120		(6)	//!< 120
#define	SYSINFOFPS_MAX		(7)	//!< 

#endif	/*	_TGLSYSTEMTYPES_H_	*/
//=============================================================================
// eof
//=============================================================================
