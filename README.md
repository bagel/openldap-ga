# openldap-ga
openldap support with google-authenticator

# How to use
add user attribute "userPassword"

	userPassword: {SSHA}hkhRhaX28zxt/dXApYGBpi3Bq0thR+1J
	userPassword: {TOTP}GFGFGIK2JFQTGVCA

"{SSHA}hkhRhaX28zxt/dXApYGBpi3Bq0thR+1J", the password is "test"

"{TOTP}GFGFGIK2JFQTGVCA", google authenticator secret, the scheme is "{TOTP}"

ldap bind password should be "test842278", "842278" is google authenticator verification code

