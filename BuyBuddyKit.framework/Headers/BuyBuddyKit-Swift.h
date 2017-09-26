// Generated by Apple Swift version 4.0 effective-3.2 (swiftlang-900.0.65 clang-900.0.37)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import CoreBluetooth;
@import CoreLocation;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("BuyBuddyKit")
@class CAShapeLayer;
@class UIImage;
@class NSCoder;

SWIFT_CLASS("_TtC11BuyBuddyKit17BorderedHitagCell")
@interface BorderedHitagCell : UICollectionViewCell
@property (nonatomic, strong) CAShapeLayer * _Nonnull shapeLayer;
@property (nonatomic) BOOL state;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)setProductImageWithImage:(UIImage * _Nonnull)image;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11BuyBuddyKit15ButtonWithFrame")
@interface ButtonWithFrame : UIButton
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;

SWIFT_CLASS("_TtC11BuyBuddyKit18BuyBuddyCartButton")
@interface BuyBuddyCartButton : UIButton
@property (nonatomic, strong) UIColor * _Nonnull badgeColor;
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)buttonPressWithButton:(UIButton * _Nonnull)button;
- (void)withBlurWithBlur:(BOOL)blur;
- (void)countDidChange:(NSString * _Nonnull)data;
@end

@class CLLocationManager;
@class CBCentralManager;
@class NSTimer;

SWIFT_CLASS("_TtC11BuyBuddyKit20BuyBuddyHitagManager")
@interface BuyBuddyHitagManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) BuyBuddyHitagManager * _Null_unspecified sharedInstance;)
+ (BuyBuddyHitagManager * _Null_unspecified)sharedInstance SWIFT_WARN_UNUSED_RESULT;
+ (void)setSharedInstance:(BuyBuddyHitagManager * _Null_unspecified)value;
@property (nonatomic, strong) CLLocationManager * _Nonnull locationManager;
@property (nonatomic, strong) CBCentralManager * _Null_unspecified centralManager;
@property (nonatomic, copy) NSString * _Null_unspecified currentHitag;
@property (nonatomic, strong) NSTimer * _Nullable passiveTimer;
@property (nonatomic) NSInteger serverTimer;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
+ (void)startHitagManager;
+ (void)stopHitagManager;
+ (NSDictionary<NSString *, NSNumber *> * _Nullable)getValidNumbersWithHitagIds:(NSArray<NSString *> * _Nonnull)hitagIds SWIFT_WARN_UNUSED_RESULT;
- (void)startRanging;
- (void)startMonitoring;
- (void)passiveHitagHandler;
@end

@class CBPeripheral;
@class NSNumber;

@interface BuyBuddyHitagManager (SWIFT_EXTENSION(BuyBuddyKit)) <CBCentralManagerDelegate>
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDiscoverPeripheral:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI;
@end

@class CLRegion;
@class CLBeacon;
@class CLBeaconRegion;

@interface BuyBuddyHitagManager (SWIFT_EXTENSION(BuyBuddyKit)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didEnterRegion:(CLRegion * _Nonnull)region;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didExitRegion:(CLRegion * _Nonnull)region;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didRangeBeacons:(NSArray<CLBeacon *> * _Nonnull)beacons inRegion:(CLBeaconRegion * _Nonnull)region;
@end

@class CBService;

SWIFT_CLASS("_TtC11BuyBuddyKit28BuyBuddyHitagReleaserManager")
@interface BuyBuddyHitagReleaserManager : NSObject <CBCentralManagerDelegate>
@property (nonatomic, copy) NSArray<CBPeripheral *> * _Nonnull peripherals;
@property (nonatomic, strong) CBCentralManager * _Null_unspecified centralManager;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull devicesToOpen;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull openSuccessDevices;
@property (nonatomic, strong) CBPeripheral * _Nullable currentHitag;
@property (nonatomic, copy) NSString * _Nullable currentHitagId;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull devicesWithFailure;
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull deviceTryCounter;
@property (nonatomic, copy) NSDictionary<NSNumber *, NSNumber *> * _Nonnull sessionTryCounter;
@property (nonatomic, strong) CBService * _Nullable hitagService;
@property (nonatomic, copy) NSArray<CBService *> * _Nonnull knownServices;
@property (nonatomic) BOOL validationBoolean;
@property (nonatomic) NSInteger sessionId;
- (void)startScan;
- (void)stopScan;
- (void)disconnectFromDevice;
- (void)scanTimeOutHandler;
- (void)connectionTimeOutHandler;
- (void)responseTimeOutHandler;
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDiscoverPeripheral:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI;
- (void)connectToHitagWithDevice:(CBPeripheral * _Nonnull)device;
- (void)centralManager:(CBCentralManager * _Nonnull)central didConnectPeripheral:(CBPeripheral * _Nonnull)peripheral;
- (void)centralManager:(CBCentralManager * _Nonnull)central didFailToConnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDisconnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class CBCharacteristic;
@class CBUUID;

@interface BuyBuddyHitagReleaserManager (SWIFT_EXTENSION(BuyBuddyKit)) <CBPeripheralDelegate>
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverServices:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverCharacteristicsForService:(CBService * _Nonnull)service error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverDescriptorsForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didUpdateValueForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
- (BOOL)UUIDsAreEqual:(CBUUID * _Nonnull)firstID secondID:(CBUUID * _Nonnull)secondID SWIFT_WARN_UNUSED_RESULT;
@end

@class NSString;

@interface CBUUID (SWIFT_EXTENSION(BuyBuddyKit))
- (NSString * _Nonnull)representativeString SWIFT_WARN_UNUSED_RESULT;
- (BOOL)equalsString:(NSString * _Nonnull)toString caseSensitive:(BOOL)caseSensitive omitDashes:(BOOL)omitDashes SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC11BuyBuddyKit12CircleButton")
@interface CircleButton : UIButton
- (void)layoutSubviews;
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11BuyBuddyKit15CircleImageView")
@interface CircleImageView : UIImageView
@property (nonatomic, readonly, strong) CAShapeLayer * _Nonnull shapeLayer;
- (void)layoutSubviews;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;
@class UIView;
@class UICollectionView;
@class NSBundle;

SWIFT_CLASS("_TtC11BuyBuddyKit29FinalizePaymentViewController")
@interface FinalizePaymentViewController : UIViewController
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified paymentLabel;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified midView;
@property (nonatomic, strong) IBOutlet UICollectionView * _Null_unspecified collectionView;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified completionView;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified topInfoLabel;
@property (nonatomic) BOOL state;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull hitagIds;
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull hitagValidations;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull hitags;
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull hitagsTried;
@property (nonatomic, copy) NSSet<NSString *> * _Nonnull devicesToOpen;
@property (nonatomic, copy) NSSet<NSString *> * _Nonnull openedDevices;
@property (nonatomic, copy) NSSet<NSString *> * _Nonnull devicesWithConnectionError;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull indexCheck;
@property (nonatomic, copy) NSString * _Nonnull currentHitag;
@property (nonatomic, copy) NSString * _Nonnull errors;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)dismissPage:(id _Nonnull)sender;
- (void)stateChange;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionViewLayout;

@interface FinalizePaymentViewController (SWIFT_EXTENSION(BuyBuddyKit)) <UICollectionViewDelegateFlowLayout>
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


@interface FinalizePaymentViewController (SWIFT_EXTENSION(BuyBuddyKit)) <UICollectionViewDataSource, UICollectionViewDelegate>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView SWIFT_WARN_UNUSED_RESULT;
- (UIEdgeInsets)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout insetForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC11BuyBuddyKit5Hitag")
@interface Hitag : CBPeripheral
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, strong) CBPeripheral * _Null_unspecified device;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name device:(CBPeripheral * _Nonnull)device OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC11BuyBuddyKit13PopUpScanView")
@interface PopUpScanView : UIView
@property (nonatomic, strong) UIImageView * _Nonnull centerImageView;
@property (nonatomic, strong) UIImage * _Nullable centerImage;
- (void)setScale;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end

@class UIStoryboardSegue;

SWIFT_CLASS("_TtC11BuyBuddyKit18ScanViewController")
@interface ScanViewController : UIViewController
@property (nonatomic, strong) IBOutlet PopUpScanView * _Null_unspecified popUpScanView;
@property (nonatomic, strong) IBOutlet BuyBuddyCartButton * _Null_unspecified cartButton;
@property (nonatomic, strong) IBOutlet CircleButton * _Null_unspecified addButton;
@property (nonatomic, strong) BuyBuddyCartButton * _Nullable userButton;
@property (nonatomic, copy) NSString * _Nullable hitagID;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull hitags;
@property (nonatomic, strong) NSCache<id, UIImage *> * _Null_unspecified cache;
@property (nonatomic, strong) UIImage * _Nonnull downloadedImage;
@property (nonatomic, readonly, strong) CAShapeLayer * _Nonnull shapeLayerButton;
- (void)viewDidLoad;
- (void)stateChange;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (IBAction)dismissController:(id _Nonnull)sender;
- (IBAction)addButtonAction:(id _Nonnull)sender;
- (void)buttonWasPressed:(UIButton * _Nonnull)data;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;

SWIFT_CLASS("_TtC11BuyBuddyKit28ShoppingBasketViewController")
@interface ShoppingBasketViewController : UIViewController
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified titleText;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified tableViewContainer;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified paymentButton;
@property (nonatomic, strong) IBOutlet UICollectionView * _Null_unspecified collectionView;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified labelContainer;
@property (nonatomic, strong) IBOutlet UITableView * _Null_unspecified tableView;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified basketTotal;
@property (nonatomic, strong) BuyBuddyCartButton * _Nullable userButton;
@property (nonatomic, strong) UILabel * _Nonnull noDataLabel;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull hitagIds;
@property (nonatomic) float totalPrice;
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull hitagValidations;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull hitagStringIds;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)stateChange;
- (void)viewWillAppear:(BOOL)animated;
- (void)createTableLabel;
- (IBAction)dismissAction:(id _Nonnull)sender;
- (IBAction)callPaymentPage:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ShoppingBasketViewController (SWIFT_EXTENSION(BuyBuddyKit)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end


@interface ShoppingBasketViewController (SWIFT_EXTENSION(BuyBuddyKit)) <UICollectionViewDataSource, UICollectionViewDelegate>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end

@class UITableViewCell;

@interface ShoppingBasketViewController (SWIFT_EXTENSION(BuyBuddyKit)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC11BuyBuddyKit25ShoppingCartTableViewCell")
@interface ShoppingCartTableViewCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11BuyBuddyKit29SuggestionsCollectionViewCell")
@interface SuggestionsCollectionViewCell : UICollectionViewCell
- (void)awakeFromNib;
- (void)setProductImageWithImage:(UIImage * _Nonnull)image;
- (void)setProductPriceWithPrice:(float)price;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIColor (SWIFT_EXTENSION(BuyBuddyKit))
+ (UIColor * _Nonnull)buddyGreen SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)buddyRed SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)buddyYellow SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIImageView (SWIFT_EXTENSION(BuyBuddyKit))
- (void)downloadedFromUrl:(NSURL * _Nonnull)url contentMode:(UIViewContentMode)mode;
- (void)downloadedFromLink:(NSString * _Nonnull)link contentMode:(UIViewContentMode)mode;
@end


@interface UIView (SWIFT_EXTENSION(BuyBuddyKit))
@property (nonatomic, readonly, strong) UIViewController * _Nullable parentViewController;
- (void)addblurView;
- (void)addBlurEffectWithDark:(BOOL)dark;
- (UIImage * _Nonnull)imageWithColor:(UIColor * _Nonnull)color SWIFT_WARN_UNUSED_RESULT;
- (void)roundedTopCorner;
- (void)roundedBottomCorner;
- (void)drawBorderWithShapeLayer:(CAShapeLayer * _Nonnull)shapeLayer inset:(CGFloat)inset width:(CGFloat)width;
@end


@interface UIView (SWIFT_EXTENSION(BuyBuddyKit))
@property (nonatomic, strong) NSTimer * _Nonnull timer;
- (void)blinkWithDuration:(NSTimeInterval)duration;
- (void)blinkAnimate;
- (void)rotateRight;
- (void)rotateLeft;
- (void)fadeInDuration:(NSTimeInterval)duration;
- (void)fadeOutWithDuration:(NSTimeInterval)duration;
- (void)scaleInOutWithDuration:(NSTimeInterval)duration;
- (void)scaleInDuration:(NSTimeInterval)duration;
- (void)scaleOutWithDuration:(NSTimeInterval)duration;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
