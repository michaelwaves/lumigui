const mongoose = require('mongoose');

const patientSchema = {
    allergies: String,
    dob: String,
    email: String,
    firstname: String,
    lastname: String,
    reason: String,
}

const Patient = mongoose.model('Patient', patientSchema);

module.exports = Patient;