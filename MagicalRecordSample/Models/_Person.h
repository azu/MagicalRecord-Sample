// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Person.h instead.

#import <CoreData/CoreData.h>


extern const struct PersonAttributes {
	 NSString *age;
	 NSString *name;
} PersonAttributes;

extern const struct PersonRelationships {
} PersonRelationships;

extern const struct PersonFetchedProperties {
} PersonFetchedProperties;





@interface PersonID : NSManagedObjectID {}
@end

@interface _Person : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PersonID*)objectID;




@property (nonatomic, retain) NSDecimalNumber *age;


//- (BOOL)validateAge:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *name;


//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;





@end

@interface _Person (CoreDataGeneratedAccessors)

@end

@interface _Person (CoreDataGeneratedPrimitiveAccessors)


- (NSDecimalNumber*)primitiveAge;
- (void)setPrimitiveAge:(NSDecimalNumber*)value;




- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;




@end
