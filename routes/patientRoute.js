const express = require('express');
const router = express.Router();
const Patient = require('../models/patientModel');

router.route("/create").post((req, res) => {
    const firstname = req.body.firstname;
    const lastname = req.body.lastname;
    const email = req.body.email;
    const dob = req.body.dob;
    const allergies = req.body.allergies;
    const reason = req.body.reason;

    const newPatient = new Patient({
        allergies,
        dob,
        email,
        firstname,
        lastname,
        reason,
    })

    newPatient.save();
})
module.exports = router;